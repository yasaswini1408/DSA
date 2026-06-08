class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans(nums.size());
        int l=0;
        int r=nums.size()-1;
        for (int i=0;i<nums.size();i++) {
            if (nums[i]<pivot) {
                ans[l]=nums[i];
                l++;
            }
        }
        for(int j=nums.size()-1;j>=0;j--){
            if(nums[j]>pivot){
                ans[r]=nums[j];
                r--;
            }
        }
        while (l<=r) {
            ans[l]=pivot;
            l++;
        }
        return ans;
    }
};