class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum=0,square=0;
        while(n>0){
            int r=n%10;
            sum+=r;
            square+=(r*r);
            n/=10;
        }
        return square-sum>=50;
    }
};