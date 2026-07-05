class Solution {
public:
    int dr(int x){
        int mn=9,mx=0;
        while(x>0){
            int d=x%10;
            mn=min(mn,d);
            mx=max(mx,d);
            x/=10;
        }
        return mx-mn;
    }
    int maxDigitRange(vector<int>& nums) {
        int mr=-1;
        int res=0;
        for(auto i:nums){
            int r=dr(i);
            if(r>mr){
                mr=r;
                res=i;
            }else if(r==mr){
                res+=i;
            }
        }
        return res;
    }
};