class Solution {
public:
    int countValidPrefixes(string s) {
        int zero=0,one=0;
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') one++;
            else zero++;
            if(abs(one-zero)<=1) c++;
        }
        return c;
    }
};