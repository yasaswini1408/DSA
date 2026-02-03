class Solution {
public:
    int finalElement(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        if(nums.size()==1) return nums[0];
        return max(nums[nums.size()-1],nums[0]);
    }
};