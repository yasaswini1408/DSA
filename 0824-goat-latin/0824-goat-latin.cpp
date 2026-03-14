class Solution {
public:
    string toGoatLatin(string s) {
        vector<char>ch={'a','e','i','o','u','A','E','I','O','U'};
        vector<string>r;
        string k="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' ') k+=s[i];
            else r.push_back(k),k="";
        }
        r.push_back(k);
        vector<string>res;
        for(int i=0;i<r.size();i++) {
            if(find(ch.begin(), ch.end(), r[i].front()) != ch.end()){
                string p=r[i];
                p+="ma";
                p += string(i+1,'a');
                res.push_back(p);
            }else {
                string l=r[i].substr(1)+r[i].front();
                l+="ma";
                l += string(i+1,'a');
                res.push_back(l);
            }
        }
        string pr="";
        for(auto i:res){
            pr+=i;
            pr+=' ';
        }
        pr.pop_back();
        return pr;
    }
};