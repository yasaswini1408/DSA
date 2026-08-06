class Solution {
public:
    int product(int n){
        int s=1;
        while(n!=0){
            s*=n%10;
            n/=10;
        }
        return s;
    }
    int smallestNumber(int n, int t) {
        while(true){
            int k=product(n);
            if(k%t==0) return n;
            n++;
        }
        return -1;
    }
};