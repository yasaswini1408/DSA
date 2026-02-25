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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>r;
        if(root==NULL) return r;
        queue<TreeNode*>q;
        q.push(root);        
        int j=0;
        while(!q.empty()){
            vector<int>l;
            int n=q.size();            
            for(int i=0;i<n;i++){
                TreeNode* temp=q.front();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                l.push_back(temp->val);
                q.pop();
            }
            
            if(j%2==1) reverse(l.begin(),l.end());
            r.push_back(l);
            j++;
        } 
        // int j=0;
        // for(auto &i:r){
        //     if(j%2==1) reverse(i.begin(),i.end());
        //     j++;
        // }   
        return r;
    }
};