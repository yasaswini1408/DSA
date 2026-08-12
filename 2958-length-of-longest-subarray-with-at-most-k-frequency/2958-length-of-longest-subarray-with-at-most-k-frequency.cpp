class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int l=0,r=0;
        int maxi=0;
        unordered_map<int,int>m;
        while(r<nums.size()){
            m[nums[r]]++;
                while(m[nums[r]]>k){
                    m[nums[l]]--;
                    l++;
                }
            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};