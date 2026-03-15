class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>r(nums.size());
        int mx=0;
        for(int i=0;i<nums.size();i++){
            mx=max(nums[i],mx);
            r[i]=__gcd(nums[i],mx);
        }
        sort(r.begin(),r.end());
        long long l=0,h=nums.size()-1,res=0;
        while(l<h){
            res+=__gcd(r[l],r[h]);
            l++;
            h--;
        }
        return res;
    }
};