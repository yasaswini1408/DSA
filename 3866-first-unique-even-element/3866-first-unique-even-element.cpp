class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto i:nums) m[i]++;
        for(int i:nums){
            if(i%2==0){
                if(m[i]==1) return i;
            }
        }
        return -1;
    }
};