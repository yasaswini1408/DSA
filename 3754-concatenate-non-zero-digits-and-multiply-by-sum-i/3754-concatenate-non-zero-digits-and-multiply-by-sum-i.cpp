class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n),res;
        int sum=0;
        for(char i:s){
            if(i>='1' and i<='9') res+=i;
            sum+=i-'0';
        }
        if(res.empty()) return 0;
        long long r=stoll(res);
        return r*sum;
    }
};