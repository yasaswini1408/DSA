class Solution {
public:
bool isvowel(char i){
    if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u') return true;
    return false;
}
    int maxVowels(string s, int k) {
        int maxi;
        int count=0;
        for(int l=0;l<k;l++){
            if(isvowel(s[l])){
                count++;
            }
        }
        maxi=count;        
        for(int h=k;h<s.length();h++){
            if(isvowel(s[h-k])){
                count--;
            }
             if(isvowel(s[h])){
                count++;
            }
             maxi=max(maxi,count);
        }
        return maxi;
    }
};