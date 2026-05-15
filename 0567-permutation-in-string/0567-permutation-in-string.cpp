class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>ms1;
        for(auto i:s1) ms1[i]++;
        
        for(int i=0;i<s2.size();i++){
            unordered_map<char,int>ms2;
            int idx=i,widx=0;
            while(idx<s2.size() and widx<s1.size()){
                ms2[s2[idx]]++;
                widx++;
                idx++;
            }
            if(ms1==ms2) return true;
        }

        return false;
    }
};