class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {

        long long sum=accumulate(nums.begin(),nums.end(),0LL);
        long long pro=1;
        for(int i=nums.size()-1;i>=0;i--){
            if(sum-nums[i]==pro) return i;
            if(pro>sum) break;
            if(pro>(LLONG_MAX/nums[i])) break;
            sum=sum-nums[i];
            pro=pro*nums[i];
        }
        return -1;

        // vector<long long>suff(nums.size()+1,1);
        // for(int i=nums.size()-1;i>=0;i--){
        //     if(suff[i+1]>LLONG_MAX/nums[i]){
        //         suff[i]=LLONG_MAX;
        //     }else
        //     suff[i]=suff[i+1]*nums[i];
        // }
        // long long lsum=0;
        // for(int i=0;i<nums.size();i++){
        //     long long rpro=suff[i+1];
        //     if(lsum==rpro) return i;

        //     lsum+=nums[i];
        // }
        // return -1;
        
        // long long sum=0;
        // for(int i=0;i<nums.size();i++){
        //     long long pro=1;
        //     for(int j=i+1;j<nums.size() and pro<=sum;j++){
        //         if(pro>LLONG_MAX/nums[j]){
        //             pro=LLONG_MAX;
        //             break;
        //         }
        //         pro*=nums[j];
        //         if(pro>sum) break;
        //     }
        //         if(sum==pro) return i;
        //         sum+=nums[i];
            
        // }
        // return -1;
    }
        // long long  mini=LLONG_MAX,index=-1;
        // for(int i=0;i<nums.size();i++){
        //     long long sum=accumulate(nums.begin(),nums.begin()+i,0LL);
        //     long long  pro=accumulate(nums.begin()+i+1,nums.end(),1LL,multiplies<long long>());
        //     if(sum==pro and nums[i]<mini){
        //         mini=nums[i];
        //         index=i;
        //     }
        // }
        // return index;
    
};