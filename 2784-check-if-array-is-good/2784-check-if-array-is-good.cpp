class Solution {
public:
    bool isGood(vector<int>& nums) {
        int k=0;
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        for(int i=1;i<=n-1;i++){
            if(i!=nums[i-1]) k=1;
        }
        if(k==0 and nums[nums.size()-1]==nums.size()-1 and nums[nums.size()-2]==nums.size()-1) return true;
        return false;
    }
};