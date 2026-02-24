/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int k = 1;
    void count(TreeNode* node){
        if(node==NULL) return;
        k++;
        count(node->left);
        count(node->right);
    }
    int countNodes(TreeNode* root) {
        if (root == NULL)
            return 0;

        count(root->left);
        count(root->right);
        return k;
    }
};