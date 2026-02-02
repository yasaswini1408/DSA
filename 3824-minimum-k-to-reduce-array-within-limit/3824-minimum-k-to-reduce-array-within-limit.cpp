class Solution {
public:
    bool isPossible(int k,vector<int>&v){
        long long c=0;
        for(auto i:v){
            c+=(i+k-1)/k;
        }
        return c<=1LL*k*k;
    }
    int minimumK(vector<int>& nums) {
        int l=1,h=max((int)nums.size(),*max_element(nums.begin(),nums.end()));
        int a=0;
        while(l<=h){
            int m=(l+h)/2;
            if(isPossible(m,nums)) a=m,h=m-1;
            else l=m+1;
        }
        return a;
    }
};