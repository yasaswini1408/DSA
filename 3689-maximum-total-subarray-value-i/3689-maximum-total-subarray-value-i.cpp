class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int p=*min_element(nums.begin(),nums.end());
        int q=*max_element(nums.begin(),nums.end());
        return 1LL*k*(q-p);
    }
};