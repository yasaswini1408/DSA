class Solution {
public:
    string processStr(string s) {
        string res;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' and s[i]<='z'){
                res+=s[i];
            }else if(s[i]=='*'){
                if(!res.empty()){
                    res.pop_back();
                }
            }else if(s[i]=='#'){
                string k=res;
                res+=k;
            }else if(s[i]=='%'){
                reverse(res.begin(),res.end());
            }
        }
        return res;
    }
};