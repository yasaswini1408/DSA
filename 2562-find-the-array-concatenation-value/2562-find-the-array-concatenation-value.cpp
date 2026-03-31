class Solution {
public:

    long long findTheArrayConcVal(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        long long k=0LL;
        while(i<j){
            string s=to_string(nums[i])+to_string(nums[j]);
            long long n=stoll(s);
            k+=n;
            i++;
            j--;
        }
        if (i == j) k += nums[i];
        return k;
    }
};