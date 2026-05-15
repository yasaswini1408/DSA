class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>ss,tt;
        for(auto i:s) ss[i]++;
        for(auto i:t) tt[i]++;
        if(ss.size()!=tt.size()) return false;
       
        return ss==tt;

        // if (s.length() != t.length()) return false;
        // int arr[26] = {0};
        // for (int i = 0 ; i<s.length(); i++){
        //     arr[s[i]-'a'] += 1;
        //     arr[t[i] - 'a'] -= 1;
        // }
        // for (int check : arr){
        //     if (check != 0) return false;
        // }
        // return true;
        
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return t==s;
    }
};