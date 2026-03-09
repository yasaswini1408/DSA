class Solution {
public:
    int minOperations(string s) {
        string t=s;
        sort(t.begin(),t.end());
        if(s==t) return 0;
        if(s.size()==2){
            if(s.front()>s.back()) return -1;
            else return 0;
        }
        if(s[0]==t[0] or s[s.size()-1]==t[t.size()-1]) return 1;
        else{
            int a=-1,b=-1;
            for(int i=0;i<s.size();i++){
                if(a==-1 and s[i]==t[0]) a=i;
                if(s[i]==t[t.size()-1]) b=i;
            }
            if(b==0 and a==s.size()-1) return 3;
            else return 2;
        }
        return -1;
    }
};