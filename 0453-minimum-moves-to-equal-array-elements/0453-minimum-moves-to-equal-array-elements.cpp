class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini=*min_element(nums.begin(),nums.end());
        int x=0;
        for (auto i:nums) x+=i-mini;
        return x;
    }
};