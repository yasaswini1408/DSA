class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int>r;
        for(auto i:matrix){
            int l=accumulate(i.begin(),i.end(),0);
            r.push_back(l);
        }
        return r;
    }
};