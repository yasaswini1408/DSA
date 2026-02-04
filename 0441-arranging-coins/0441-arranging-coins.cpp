class Solution {
public:
    int arrangeCoins(int n) {
        long long l = 1, r = n;
        int ans = 1;
        while (l <= r) {
            long long mid = (l + r) / 2;
            long long sum = (mid * (mid + 1)) / 2;
            if (sum <= n) {
                ans = mid;
                l = mid + 1;
            } else r = mid - 1;
        }
        return ans;

        // long long i=1,l=0;
        // bool k=true;
        // while(k){
        //     long long p=(i*(i+1))/2;
        //     if(p<=n) l++,i++;
        //     else k=false;
        // }
        // return l;
    }
};