class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        unordered_map<int,int>r;
        for(auto i:m){
            r[i.second]++;
        }
        for(auto i:nums){
            if(r[m[i]]==1) return i;
        }
        return -1;
    }
};