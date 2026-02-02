class Solution {
public:
    string reverseByType(string s) {
        string p,q;
        for(auto i:s){
            if(i>='a' and i<='z') p+=i;
            else q+=i;
        }
        reverse(p.begin(),p.end());
        reverse(q.begin(),q.end());
        int k=0,j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' and s[i]<='z') s[i]=p[k],k++;
            else s[i]=q[j],j++;
        }
        return s;
    }
};