class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        set<int>s(nums.begin(),nums.end());
        for(auto i:nums) mp[i]++;
        vector<int>res;
        for(auto i:s){
            if(mp[i]>=k) {
                for(int j=0;j<k;j++) res.push_back(i);
            }else{
                for(int j=0;j<mp[i];j++) res.push_back(i);
            }
        }
        return res;
    }
};