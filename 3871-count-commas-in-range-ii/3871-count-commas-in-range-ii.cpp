class Solution {
public:
    long long countCommas(long long n) {
        long long res=0,b=1000,c=1;
        while(b<=n){
            long long e=min(n,b*1000-1);
            res+=(e-b+1)*c;
            b*=1000;
            c++;
        }
        return res;
    }
};