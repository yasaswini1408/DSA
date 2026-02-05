class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int minlen=INT_MAX;
        int s=0;
        for(int r=0;r<nums.size();r++){
            s+=nums[r];
            while(s>=target){
                minlen=min(minlen,r-l+1);
                s-=nums[l];
                l++;
            }
        }
        if(minlen==INT_MAX) return 0;
        return minlen;
    }
};