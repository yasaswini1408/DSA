class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,m=0;
        unordered_set<char>c;
        for(int i=0;i<s.size();i++){
            while(c.find(s[i])!=c.end()){
                c.erase(s[l]);
                l++;
            }
            c.insert(s[i]);
            m=max(m,i-l+1);
        }
        return m;
    }
};