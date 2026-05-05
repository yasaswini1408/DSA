class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            int p=0,q=0;
            for(int j=0;j<i;j++){
                if(nums[j]>=nums[i]) {p=1;break;}
            }
            for(int k=i+1;k<nums.size();k++){
                if(nums[k]>=nums[i]) {q=1;break;}
            }
            if(p==0 or q==0) res.push_back(nums[i]);
        }
        return res;
    }
};