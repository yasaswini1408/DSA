class Solution {
public:
    bool validDigit(int n, int x) {
        string s=to_string(n);
        char l=x+'0';
        return find(s.begin(),s.end(),'l')!=s.end();
    }
};