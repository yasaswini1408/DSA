class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int aa=0,bb=0;
        for(auto i:s){
            if(i=='a') aa++;
            else bb++;
        }
        return abs(aa-bb);
    }
};