class Solution {
public:
    int minimumPushes(string word) {
        int a=0;
        for(int i=0;i<word.size();i++){
            a+=i/8+1;
        }
        return a;
    }
};