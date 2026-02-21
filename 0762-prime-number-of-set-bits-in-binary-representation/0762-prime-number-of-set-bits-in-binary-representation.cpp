class Solution {
public:
    bool isprime(int n){
        if (n<=1) return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int c=0;
        for(int i=left;i<=right;i++){
            int k=__builtin_popcount(i);
            if(isprime(k)) c++;
        }
        return c;
    }
};