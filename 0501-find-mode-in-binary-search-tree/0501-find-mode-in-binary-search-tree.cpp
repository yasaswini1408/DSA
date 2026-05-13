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
    unordered_map<int,int>f;
    void explore(TreeNode* s){
        if(s==NULL) return;
        f[s->val]++;
        explore(s->right);
        explore(s->left);
    }
    vector<int> findMode(TreeNode* root) {
        // if(root==NULL) return {};
        // f[root->val]++;
        // explore(root->left);
        // explore(root->right);
        explore(root);
        int m=INT_MIN;
        for(auto i:f){
            m=max(m,i.second);
        }
        vector<int>res;
        for(auto i:f){
            if(i.second==m) res.push_back(i.first);
        }
        return res;
    }
};