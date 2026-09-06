class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int c=0,n=nums.size();
        long long fh=accumulate(nums.begin(),nums.begin()+(n/2),0LL);
        long long sh=accumulate(nums.begin()+(n/2),nums.end(),0LL);
        for(int i=0;i<n;i++){
            if(fh>sh) c++;
            fh+=nums[(i+n/2)%n]-nums[i];
            // cout<<fh<<" ";
            // cout<<endl;
            sh+=nums[i]-nums[(i+n/2)%n];
            // cout<<sh<<" ";
        }
        return c;
    }
};