class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>left,middle,right,res;
        for(int i:nums){
            if(i<pivot) left.push_back(i);
            else if(i==pivot) middle.push_back(i);
            else if(i>pivot) right.push_back(i);
        }
        for(auto i:left) res.push_back(i);
        for(auto i:middle) res.push_back(i);
        for(auto i:right) res.push_back(i);
        return res;
    }
};