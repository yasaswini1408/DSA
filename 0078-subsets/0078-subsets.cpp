class Solution {
public:
    void sub(vector<vector<int>>& res,vector<int>& n,vector<int>& t,int i){
        if(i==n.size()){
            res.push_back(t);
            return;
        }
        t.push_back(n[i]);
        sub(res,n,t,i+1);
        t.pop_back();
        sub(res,n,t,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>t;
        sub(res,nums,t,0);
        return res;
    }
};