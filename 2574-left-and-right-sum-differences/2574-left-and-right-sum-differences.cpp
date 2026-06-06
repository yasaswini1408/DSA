class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>r(nums.size(),0),l(nums.size(),0),res(nums.size());
        for(int i=1;i<nums.size();i++) r[i]=r[i-1]+nums[i-1];
        for(int i=nums.size()-2;i>=0;i--) l[i]=l[i+1]+nums[i+1];
        for(int i=0;i<nums.size();i++) res[i]=abs(r[i]-l[i]);
        return res;
    }
};