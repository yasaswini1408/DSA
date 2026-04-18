class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,cand=-1;
        for(int i:nums){
            if(count==0) cand=i,count++;
            else if(i==cand) count++;
            else count--;
        }
        return cand;
    }
};