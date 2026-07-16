class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>mp(nums.size());
        int mx=nums[0];
        mp[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            mx=max(mx,nums[i]);
            mp[i]=__gcd(nums[i],mx);
        }
        // for(auto i:mp) cout<<i<<" ";
        sort(mp.begin(),mp.end());
        long long sum=0,l=0,h=mp.size()-1;
        while(l<h){
            sum+=__gcd(mp[l],mp[h]);
            l++;h--;
        }
        return sum;
    }
};