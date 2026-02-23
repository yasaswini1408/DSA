class Solution {
public:
    bool isDigitorialPermutation(int n) {
        vector<int>fact={1,1,2,6,24,120,720,5040,40320,362880};
        int k=0,p=n,l=0;
        while(n>0){
            int r=n%10;
             l++;
             k+=fact[r];
             n/=10;
        }
        vector<int>p1(10,0);
        vector<int>p2(10,0);
        while(p>0){
            p1[p%10]++;
            p/=10;
        }
        while(k>0){
            p2[k%10]++;
            k/=10;
        }
        return p1==p2;
    }
};