class Solution {
public:
    bool isPalindrome(string s) {
        string ss,k;
        for(auto i:s){
            if(isalnum(i)) ss+=tolower(i);
        }
        k=ss;
        reverse(k.begin(),k.end());
        return k==ss;
    }
};