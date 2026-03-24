class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
        return false;
    }
    long long countVowels(string word) {
        int n = word.length();
        vector<long long> dp(n,0);
        if(isVowel(word[0])) dp[0] = 1;
        else dp[0] = 0;
        for(int i=1;i<n;i++){
            if(isVowel(word[i])) dp[i]  = 1 + dp[i-1]+i; 
            else dp[i] = dp[i-1];
        }
        long long res = 0;
        for(int i=0;i<n;i++){
            res+= dp[i];
        }
        return res;
    }
};

