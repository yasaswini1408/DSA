class Solution {
public:
    string trimTrailingVowels(string s) {
        int p=s.size();
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u') p--;
            else break;
        }
        return s.substr(0,p);
    }
};