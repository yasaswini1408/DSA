class Solution {
public:
    vector<int> evenOddBit(int n) {
        string p=bitset<32>(n).to_string();
        string q=bitset<32>(n).to_string();
        int eve=0,od=0;
        for(int i=0;i<p.size();i++){
            if(i%2==0 and p[i]=='1') eve++;
            else if(i%2!=0 and q[i]=='1') od++;
        }
        return {od,eve};
    }
};