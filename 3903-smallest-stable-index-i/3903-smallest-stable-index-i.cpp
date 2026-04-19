class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int mini=*max_element(nums.begin(),nums.begin()+i+1);
            int maxi=*min_element(nums.begin()+i,nums.end());
            int score=mini-maxi;
            if(score<=k){
                ans=min(ans,i);
            }
        }
        return ans==INT_MAX? -1:ans;
    }
};