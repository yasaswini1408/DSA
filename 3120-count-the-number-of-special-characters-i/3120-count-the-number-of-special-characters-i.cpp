class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>lower(26,0),upper(26,0);
        for(int i=0;i<word.size();i++){
            if(islower(word[i])) lower[word[i]-'a']++;
            else upper[word[i]-'A']++;
        }
        int c=0;
        for(int i=0;i<lower.size();i++){
            if(lower[i]>=1 and upper[i]>=1) c++;
        }
        return c;
    }
};