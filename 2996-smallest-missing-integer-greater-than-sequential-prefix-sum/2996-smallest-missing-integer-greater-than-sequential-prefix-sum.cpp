class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int i=1,n=nums.size();
        int start=nums[0];
        while(i<n and nums[i]==nums[i-1]+1) start+=nums[i],i++;
        // start+=nums[i];
        cout<<i<<" "<<start;
        unordered_map<int,int>m;
        for(auto i:nums) m[i]++;
        int p=start;
        while(m.count(p)){
            p++;
        }
        return p;
    }
};