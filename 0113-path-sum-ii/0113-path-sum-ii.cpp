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
    void check(TreeNode* node, int s, int target, vector<int>& l,vector<vector<int>>& r) {
        if (node == NULL) return;
        if (node->left == NULL and node->right == NULL) {
            if (s == target) r.push_back(l);
            return;
        }
        if (node->left) {
            l.push_back(node->left->val);
            check(node->left, s + node->left->val, target, l, r);
            l.pop_back();
        }
        if (node->right) {
            l.push_back(node->right->val);
            check(node->right, s + node->right->val, target, l, r);
            l.pop_back();
        }
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> r;
        vector<int> l;
        if (root == NULL) return r;
        l.push_back(root->val);
        check(root, root->val, targetSum, l, r);
        return r;
    }
};