class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>res;
        for(auto i:nums){
            vector<int>r1;
            while(i!=0){
                int r=i%10;
                r1.push_back(r);
                i/=10;
            }
            reverse(r1.begin(),r1.end());
            for(auto j:r1) res.push_back(j);
        }
        return res;
    }
};