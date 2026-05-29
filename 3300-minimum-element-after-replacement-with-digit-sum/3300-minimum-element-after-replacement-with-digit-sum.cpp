class Solution {
public:
    int sum(int n){
        int c=0;
        while(n>0){
            c+=n%10;
            n=n/10;
        }
        return c;
    }
    int minElement(vector<int>& nums) {
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            nums[i]=sum(nums[i]);
            mini=min(mini,nums[i]);
        }
        return mini;
    }
};