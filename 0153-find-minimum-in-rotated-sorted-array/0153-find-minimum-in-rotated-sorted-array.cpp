class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini=INT_MAX;
        for(int i:nums){
            if(i<mini) mini=i;
        }
        return mini;
    }
};