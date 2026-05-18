class Solution {
public:
    long long fun(long long n,int k){
        if(n<0) return 0;
        long long l=0,h=LLONG_MAX,ans=0;
        while(l<=h){
            long long m=(l+h)/2;
            long long val=1;
            bool of=false;
            for(int i=0;i<k;i++){
                if(m!=0 and val>n/m){
                    of=true;
                    break;
                }
                val*=m;
            }
            if(!of and val<=n){
                ans=m;
                l=m+1;
            }else h=m-1;
        }
        return ans+1;
    }
    int countKthRoots(int l, int r, int k) {
        long long s=l-1;
        return fun(r,k)-fun(s,k);
    }
};