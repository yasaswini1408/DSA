class Solution {
public:
    int numberOfSpecialChars(string word) {
        int c = 0;
        vector<int> lower(26, -1), upper(26, -1);
        for (int i = 0; i < word.size(); i++) {
            if (islower(word[i])) {
                lower[word[i] - 'a'] = i;  
            } 
            else {
                int idx = word[i] - 'A';
                if (upper[idx] == -1)
                    upper[idx] = i;   
            }
        }
        for (int i = 0; i < 26; i++) {
            if (lower[i] != -1 &&
                upper[i] != -1 &&
                lower[i] < upper[i]) {
                c++;
            }
        }
        return c;
    }
};