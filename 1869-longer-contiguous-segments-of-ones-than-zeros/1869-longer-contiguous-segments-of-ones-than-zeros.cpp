class Solution {
public:
    bool checkZeroOnes(string s) {
        int ones=INT_MIN,zeros=INT_MIN;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                int k=i;
                while(s[k+1]!='0' and k+1<s.size()) k++;
                ones=max(ones,k-i+1);
            }else{
                int p=i;
                while(s[p+1]!='1' and p+1<s.size()) p++;
                zeros=max(zeros,p-i+1);
            }
        }
        cout<<ones<<" "<<zeros;
        return ones>zeros;
    }
};