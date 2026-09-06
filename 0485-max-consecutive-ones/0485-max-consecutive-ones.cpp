class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l=0,r=0;
        int maxi=INT_MIN;
        while(r<nums.size()){
            if(nums[r]!=1) {
                maxi=max(maxi,r-l);
                l=r+1,r++;
            }
            else r++;
        }
        maxi=max(maxi,r-l);
        return maxi;
    }
};