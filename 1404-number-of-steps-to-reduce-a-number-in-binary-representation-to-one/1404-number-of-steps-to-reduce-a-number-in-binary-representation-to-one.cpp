class Solution {
public:
    int numSteps(string s) {
       int c=0;
       while(s!="1"){
        if(s.back()=='0') s.pop_back();
        else{
            int n=s.length()-1;
            while(n>=0 && s[n]=='1'){
                s[n]='0';
                n--;
            }
            if(n>=0) s[n]='1';
            else s.insert(s.begin(),'1');
        }
        c++;
       }
       return c;
    }
};