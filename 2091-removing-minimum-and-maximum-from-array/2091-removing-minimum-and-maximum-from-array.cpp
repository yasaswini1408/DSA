class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini=*min_element(nums.begin(),nums.end());
        int maxi=*max_element(nums.begin(),nums.end());

        int p=-1,q=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==mini) p=i;
            if(nums[i]==maxi) q=i;
        }

        int left=min(p,q);
        int right=max(p,q);
        int n=nums.size();

        int front=right+1;
        int back=n-left;
        int both=(left+1)+(n-right);

        return min({front,back,both});
    }
};