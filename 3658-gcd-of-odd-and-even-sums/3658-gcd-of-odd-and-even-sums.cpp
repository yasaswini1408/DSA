class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odds=n*n,eves=n*(n+1);
        // cout<<eves<<odds;
        return __gcd(odds,eves);
    }
};