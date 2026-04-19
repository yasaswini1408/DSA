class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>arr=nums;
        vector<int>suff(n);
        suff[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            suff[i]=min(suff[i+1],arr[i]);
        }
        int pm=INT_MIN;
        for(int i=0;i<n;i++){
            pm=max(pm,arr[i]);
            if(pm-suff[i]<=k) return i;
        }
        return -1;
    }
};