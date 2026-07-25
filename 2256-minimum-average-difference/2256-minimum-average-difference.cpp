class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        vector<long long> p(n);
        p[0] = nums[0];
        for (int i = 1; i < n; i++)
            p[i] = p[i - 1] + nums[i];
        vector<long long> s(n);
        s[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--)
            s[i] = s[i + 1] + nums[i];
        int ans = 0;
        long long mn = LLONG_MAX;
        for (int i = 0; i < n; i++) {
            long long leftAvg = p[i] / (i + 1);
            long long rightAvg = 0;
            if (i != n - 1)
                rightAvg = s[i + 1] / (n - i - 1);
            long long diff = llabs(leftAvg - rightAvg);
            if (diff < mn) {
                mn = diff;
                ans = i;
            }
        }

        return ans;
    }
};