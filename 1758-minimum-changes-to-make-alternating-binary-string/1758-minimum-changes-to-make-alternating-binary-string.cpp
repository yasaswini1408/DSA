class Solution {
public:
    int minOperations(string s) {
        // int c=0;
        // for(int i=0;i<s.size()-1;i++){
        //     if(s[i]==s[i+1]) {
        //         if(s[i]=='0') s[i+1]='1'; 
        //         else s[i+1]='0';

        //         c++;
        //     }
        // }
        // return c;
        int p=0,q=0;
        // if(s[0]=='1'){
            for(int i=0;i<s.size();i++){
                if(i%2==0 and s[i]=='1') continue;
                else if(i%2!=0 and s[i]=='0') continue;
                else p++;
            }
        // }
        // if(s[0]=='0'){
            for(int i=0;i<s.size();i++){
                if(i%2==0 and s[i]=='0') continue;
                else if(i%2!=0 and s[i]=='1') continue;
                else q++;
            }
        // }
        return min(p,q);

    }
};