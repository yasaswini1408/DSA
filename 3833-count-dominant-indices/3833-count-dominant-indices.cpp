class Solution {
public:
double avg(vector<int>&v){
    int n=0;
    for(int i:v) n+=i;
    return (double)n/v.size();
}
    int dominantIndices(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size()-1;i++){
            vector<int>k(nums.begin()+i+1,nums.end());
            if(nums[i]>avg(k)) j++;
        }
        return j;
    }
};