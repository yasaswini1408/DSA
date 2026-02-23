class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        bool active=true;
        int dif=0;
        for(int i=0;i<nums.size();i++){
            int k=nums[i];
            if(k%2!=0) active=!active;
            if(i%6==5) active=!active;
            if(active) dif+=k;
            else dif-=k;
        }
        return dif;
    }
};