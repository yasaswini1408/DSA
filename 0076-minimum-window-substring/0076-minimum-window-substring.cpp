class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size()>s.size()) return "";
        unordered_map<char,int>mt,ms;
        for(auto c:t) mt[c]++;
        int required=mt.size();
        int formed=0;
        int l=0,r=0;
        int start=0,minLen=INT_MAX;
        while(r<s.size()){
            ms[s[r]]++;
            if(mt.count(s[r]) and ms[s[r]]==mt[s[r]])
                formed++;
            while(formed==required){
                if(r-l+1<minLen){
                    minLen=r-l+1;
                    start=l;
                }
                ms[s[l]]--;
                if(mt.count(s[l]) and ms[s[l]]<mt[s[l]])
                    formed--;
                l++;
            }
            r++;
        }
        return minLen==INT_MAX?"":s.substr(start,minLen);
    }
};