class Solution {
public:
    int mirrorDistance(int n) {
        string k=to_string(n);
        reverse(k.begin(),k.end());
        int p=stoi(k);
        return abs(n-p);
    }
};