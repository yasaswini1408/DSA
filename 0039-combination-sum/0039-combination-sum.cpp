class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> combi;
        solve(candidates, target, 0, combi, result);
        return result;
    }
    void solve(vector<int>& candidates, int rtarget, int sindex,vector<int>& combi, vector<vector<int>>& result) {
        if (rtarget == 0) {
            result.push_back(combi);  
            return;
        }
        if (rtarget < 0) return;     
        for (int i = sindex; i < candidates.size(); i++) {
            combi.push_back(candidates[i]);            
            solve(candidates, rtarget - candidates[i], i, combi, result);
            combi.pop_back();                  
        }
    }
};