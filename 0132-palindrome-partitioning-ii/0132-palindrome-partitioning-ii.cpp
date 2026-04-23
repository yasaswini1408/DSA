class Solution {
public:
// this is the memorization method
    int f(int i, int n, string &s, vector<int> &dp) {
        if (i == n) return 0;
        if (dp[i] != -1) return dp[i]; 
        int mini = INT_MAX;
        for (int j = i; j < n; j++) {
            if (pa(s, i, j)) {
                int cost = 1 + f(j + 1, n, s, dp);
                mini = min(mini, cost);
            }
        }
        return dp[i] = mini; 
    }

    bool pa(string &s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    int minCut(string s) {
        int n = s.size();
        vector<int> dp(n, -1);
        return f(0, n, s, dp) - 1;
    }
};