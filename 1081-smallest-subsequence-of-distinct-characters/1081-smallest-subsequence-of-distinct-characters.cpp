class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> last(26, 0);
        for (int i = 0; i < s.length(); i++) last[s[i] - 'a'] = i;
        vector<bool> vis(26, false);
        string res = "";
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (vis[c - 'a']) continue;
            while (!res.empty() && res.back() > c && last[res.back() - 'a'] > i) {
                vis[res.back() - 'a'] = false;
                res.pop_back();
            }
            res.push_back(c);
            vis[c - 'a'] = true;
        }
        return res;
    }
};