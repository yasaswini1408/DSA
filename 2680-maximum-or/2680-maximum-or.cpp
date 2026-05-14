class Solution {
public:
    long long maximumOr(vector<int>& arr, int k) {
        int n=arr.size();
        vector<long long> pre(n),suff(n);
        pre[0]=arr[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]|arr[i];
        }
        suff[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            suff[i]=suff[i+1]|arr[i];
        }
        long long ans=0;
        for(int i=0;i<n;i++){
            long long l=(i>0)?pre[i-1]:0;
            long long r=(i<n-1)?suff[i+1]:0;
            long long res=l|(long long)arr[i]<<k|r;
            ans=max(ans,res);
        }
        return ans;
    }
};