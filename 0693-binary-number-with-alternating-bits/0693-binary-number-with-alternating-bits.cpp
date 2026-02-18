class Solution {
public:
    bool hasAlternatingBits(int n) {
        unsigned int x=n^(n>>1);
        return (x&(x+1))==0;

        // string s=bitset<64>(n).to_string();
        // s=s.substr(s.find_first_not_of('0'));
        // for(int i=0;i<s.size()-1;i++){
        //     if(s[i]==s[i+1]) return false;
        // }
        // return true;
    }
};