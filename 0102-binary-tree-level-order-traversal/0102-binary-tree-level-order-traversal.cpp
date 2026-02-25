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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> r;
        queue<TreeNode*> q;
        if (root == NULL) return r;
        q.push(root);
        while (!q.empty()) {
            vector<int> l;
            int m = q.size();
            for (int i = 0; i < m; i++) {
                TreeNode* temp = q.front();
                if (temp->left != NULL) q.push(temp->left);
                if (temp->right != NULL) q.push(temp->right);
                l.push_back(temp->val);
                q.pop();
            }
            r.push_back(l);
        }
        return r;
    }
};