class Solution {
public:
    bool canJump(vector<int>& nums) {
        int goal=nums.size()-1,i=nums.size()-1;
        while(i>-1){
            if(i+nums[i]>=goal){
                goal=i;
            }
            i--;
        }
        return goal==0;
    }
};