class Solution {
public:
    int sum(int k){
        int s=0;
        while(k!=0){
            s+=k%10;
            k/=10;
        }
        return s;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(sum(nums[i])==i) return i;
        }
        return -1;
    }
};