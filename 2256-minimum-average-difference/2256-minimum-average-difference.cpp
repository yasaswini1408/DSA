class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long total = 0;
        for (int x : nums)
            total += x;
        long long left = 0;
        long long best = LLONG_MAX;
        int ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            left += nums[i];
            long long leftAvg = left / (i + 1);
            long long rightAvg = 0;
            if (i != n - 1)
                rightAvg = (total - left) / (n - i - 1);
            long long diff = llabs(leftAvg - rightAvg);
            if (diff < best) {
                best = diff;
                ans = i;
            }
        }
        return ans;
    }
};