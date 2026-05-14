class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = nums.size();        
        for (int i = 0; i < nums.size(); i++) res += i - nums[i];        
        return res;


        // if(nums.size()==1 and nums[0]!=0) return 0;
        
        // int maxx=*max_element(nums.begin(),nums.end());
        // int shouldBe=(maxx*(maxx+1))/2;
        // int summ=accumulate(nums.begin(),nums.end(),0);

        // if(shouldBe-summ==0 && nums.size()==maxx) return 0;
        // else if(shouldBe-summ>0) return shouldBe-summ;
        // else return maxx+1;
    }
};