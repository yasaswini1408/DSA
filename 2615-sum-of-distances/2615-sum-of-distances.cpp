class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        vector<long long> r(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++) {
            long long s = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (i != j) {
                    if (nums[i] == nums[j]) {
                        s += abs(i - j);
                    }
                }
            }
            r[i] = s;
        }
        return r;
    }
};