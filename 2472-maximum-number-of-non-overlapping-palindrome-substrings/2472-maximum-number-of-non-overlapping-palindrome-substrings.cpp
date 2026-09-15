class Solution {
public:
    int maxPalindromes(string s, int k) {
        int n = s.size();
        int res = 0;
        int i = 0;
        while (i <= n - k) {
            bool found = false;
            for (int len = k; len <= k + 1; len++) {
                if (i + len > n) continue;
                bool ok = true;
                int l = i, r = i + len - 1;
                while (l < r) {
                    if (s[l] != s[r]) {
                        ok = false;
                        break;
                    }
                    l++;
                    r--;
                }
                if (ok) {
                    res++;
                    i += len;
                    found = true;
                    break;
                }
            }
            if (!found) i++;
        }
        return res;
    }
};