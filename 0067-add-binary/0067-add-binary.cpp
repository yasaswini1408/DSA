class Solution {
public:
    string addBinary(string a, string b) {
        string r="";
        int i=a.size()-1,j=b.size()-1,c=0;
        while(i>=0||j>=0||c>0){
            int t=c;
            if(i>=0) {
                t+=a[i]-'0';
                i--;
            }
            if(j>=0){
                t+=b[j]-'0';
                j--;
            }
            r+=(t%2)+'0';
            c=t/2;
        }
        reverse(r.begin(),r.end());
        return r;
    }
};