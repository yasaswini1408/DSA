class Solution {
public:
    int arrangeCoins(int n) {
        long long i=1,l=0;
        bool k=true;
        while(k){
            long long p=(i*(i+1))/2;
            if(p<=n) l++,i++;
            else k=false;
        }
        return l;
    }
};