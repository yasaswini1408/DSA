class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int n=nums.size();        
        if(k==n) return *max_element(nums.begin(),nums.end());        
        for(auto i:nums) m[i]++;        
        if(k==1){
            int maxi=-1;
            for(auto i:nums){
                if(m[i]==1) maxi=max(maxi,i);
            }
            return maxi;
        }        
        if(m[nums[0]]==1 and m[nums[n-1]]==1) return max(nums[0],nums[n-1]);
        else if(m[nums[0]]==1) return nums[0];
        else if(m[nums[n-1]]==1) return nums[n-1];
        return -1;
    }
};