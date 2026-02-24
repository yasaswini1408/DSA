/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int k=0;
    int sum(TreeNode* node,bool a){
        if(node==NULL) return 0;
        if(node->right==NULL and node->left==NULL) {
            if(a) k+=node->val;  
        }    
        sum(node->left,true);
        sum(node->right,false);          
        return k;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        k=0;
        if(root==NULL) return 0;
        return sum(root,false);
    }
};