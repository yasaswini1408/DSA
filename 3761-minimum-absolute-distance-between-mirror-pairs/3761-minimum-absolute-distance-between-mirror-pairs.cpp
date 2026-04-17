class Solution {
public:
    int minMirrorPairDistance(vector<int>& nums) {
        int mini = INT_MAX;
        int n = nums.size();
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < n; i++) mp[nums[i]].push_back(i);
        for (int i = 0; i < n; i++) {
            string p = to_string(nums[i]);
            reverse(p.begin(), p.end());
            size_t k = p.find_first_not_of('0');
            if (k == string::npos) p = "0";
            else p = p.substr(k);
            int val = stoi(p);
            if (mp.count(val)) {
                for (int j : mp[val]) {
                    if (j > i) { 
                        mini = min(mini, j - i);
                        break; 
                    }
                }
            }
        }
        return mini == INT_MAX ? -1 : mini;
    }
};