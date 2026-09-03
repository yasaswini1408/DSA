class Solution{
public:
    bool uniformArray(vector<int>& nums){
        int odd=INT_MAX,even=INT_MAX;
        for(int x:nums){
            if(x%2)odd=min(odd,x);
            else even=min(even,x);
        }
        if(odd==INT_MAX||even==INT_MAX) return true;
        return even-odd>=1;
    }
};