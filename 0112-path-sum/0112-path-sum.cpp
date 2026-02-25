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
    bool check(TreeNode* node, int s,int target){        
        if(node==NULL) return false;
        if(node->left==NULL and node->right==NULL){
            s+=node->val;
            return s==target;
        }       
        return check(node->left,s+node->val,target)||check(node->right,s+node->val,target);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        return check(root,0,targetSum);
    }
};