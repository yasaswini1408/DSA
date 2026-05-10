class Solution {
public:
    int minFlips(string s) {
        int ones = count(s.begin(), s.end(), '1');
        int zero = count(s.begin(), s.end(), '0');
        int ans = min(ones, zero);
        if (ones > 0)  ans = min(ans, ones - 1);
        int siz = s.size();
        if (siz >= 2) {
            if (s[0] == '1' && s[siz - 1] == '1') ans = min(ans, ones - 2); 
            else if (s[0] == '1' || s[siz - 1] == '1') ans = min(ans, ones); 
            else ans = min(ans, ones + 2);
        }
        return ans;
    }
};