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
int k=1;
    int depth(TreeNode* node){
        if(node==NULL) return 0;
        return 1+max(depth(node->left),depth(node->right));
    }
    int maxDepth(TreeNode* root) {
        // if(root==NULL) return 0;
        return depth(root);
    }
};