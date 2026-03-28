class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int p=-1,q=-1,ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) {
                p=i;
                if(q!=-1){
                    ans=min(ans,abs(p-q));
                }
            }
            else if(nums[i]==2) {
                q=i;
            if(p!=-1){
                ans=min(ans,abs(q-p));
            }}
        }
        if(ans==INT_MAX) return -1;
        else return ans;
    }
};