class Solution {
public:
    bool detectCapitalUse(string word) {
        int c=0;
        for(int i=0;i<word.size();i++){
            if(word[i]>='A' and word[i]<='Z') c++;
        }
        if(c==1 and (word[0]>='A' and word[0]<='Z')) return true;
        if(c==word.size() or c==0) return true;
        return false;
    }
};