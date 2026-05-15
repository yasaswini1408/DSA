class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        unordered_map<char,int>ms1,ms2;
        for(auto i:s1) ms1[i]++;
        for(int i=0;i<s1.size();i++) ms2[s2[i]]++;
        if(ms1==ms2) return true;
        int l=0;
        for(int r=s1.size();r<s2.length();r++){
            ms2[s2[r]]++;
            ms2[s2[l]]--;
            if(ms2[s2[l]]==0) ms2.erase(s2[l]);
            l++;
            if(ms1==ms2) return true;
        }
        return false;
    }
};