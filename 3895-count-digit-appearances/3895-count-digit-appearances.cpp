class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        char p=digit+'0';
        int co=0;
        for(auto i:nums){
            string k=to_string(i);
            co+=count(k.begin(),k.end(),p);
        }
        return co;
    }
};