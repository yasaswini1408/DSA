class Solution {
public:
    bool isprime(int k){
        if(k<=1) return false;
        for(int i=2;i<=sqrt(k);i++){
            if(k%i==0) return false;
        }
        return true;
    }
    int minOperations(vector<int>& nums) {
        int op=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                while(!isprime(nums[i])){
                    nums[i]++;
                    op++;
                }                
            }else{
                while(isprime(nums[i])){
                    nums[i]++;
                    op++;
                }                
            }
        }
        return op;
    }
};