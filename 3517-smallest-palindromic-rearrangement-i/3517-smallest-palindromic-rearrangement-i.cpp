class Solution {
public:
    bool ispalin(string s){
        int l=0,r=s.size()-1;
        while(l<r){
            if(s[l]!=s[r]) return false;
            l++,r--;
        }
        return true;
    }
    string smallestPalindrome(string s) {
        map<char,int>c;
        for(auto i:s) c[i]++;
        string k=s;
        int l=0,r=s.size()-1;
        for(auto &i:c){
            while(i.second>=2){
                k[l]=i.first;
                l++;
                i.second--;
                k[r]=i.first;
                i.second--;
                r--;
            }
        }
        return k;        
    }
};