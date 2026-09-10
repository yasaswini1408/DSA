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
    int c=0;
    pair<int,int> sum(TreeNode* root){
        if(root==NULL) return {0,0};
        pair<int,int> l=sum(root->left);
        pair<int,int> r=sum(root->right);
        int s=root->val+l.first+r.first;
        int cnt=1+l.second+r.second;
        if(root->val==s/cnt) c++;
        return {s,cnt};
    }

    int averageOfSubtree(TreeNode* root) {
        sum(root);
        return c;
    }
};