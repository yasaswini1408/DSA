class Solution {
public:
    int reverseDegree(string s) {
        int ss=0;
        for(int i=1;i<=s.size();i++){
            cout<<26-s[i-1]+'a'<<" ";
            ss+=i*(26-s[i-1]+'a');
        }
        return ss;
    }
};