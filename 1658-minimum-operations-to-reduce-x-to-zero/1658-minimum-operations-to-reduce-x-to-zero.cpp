class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int total=0;
        for(int a:nums) total+=a;
        int target=total-x;
        if(target<0) return -1;
        if(target==0) return n;
        int l=0,sum=0,mx=-1;
        for(int r=0;r<n;r++){
            sum+=nums[r];
            while(l<=r && sum>target){
                sum-=nums[l];
                l++;
            }
            if(sum==target) mx=max(mx,r-l+1);
        }
        return mx==-1 ? -1 : n-mx;
    }
};