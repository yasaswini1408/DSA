class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()) return false;
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        for(int i=0;i<word1.size();i++) m1[word1[i]]++;
        for(int i=0;i<word2.size();i++) m2[word2[i]]++;  

        for(auto it:m1){
            if(m2.count(it.first)==0) return false;
        }

        vector<int>mm1,mm2;
        for(auto i:m1) mm1.push_back(i.second); 
        for(auto i:m2) mm2.push_back(i.second); 
        sort(mm1.begin(),mm1.end());
        sort(mm2.begin(),mm2.end());
        return mm1==mm2;
    }
};