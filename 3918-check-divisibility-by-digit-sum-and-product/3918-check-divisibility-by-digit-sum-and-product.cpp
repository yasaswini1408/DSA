class Solution {
public:
    int sum(int n){
        int c=0;
        while(n>0){
            c+=n%10;
            n/=10;
        }
        return c;
    }
    int product(int n){
        int c=1;
        while(n>0){
            c*=n%10;
            n/=10;
        }
        return c;
    }
    bool checkDivisibility(int n) {
        int k=sum(n);
        int q=product(n);
        return n%(k+q)==0;
    }
};