class Solution {
public:
    int sum(int n) {
        int k = 0;
        while (n != 0) {
            k += (n % 10) * (n % 10);
            n /= 10;
        }
        return k;
    }
    bool isHappy(int n) {
        unordered_set<int> seen;
        while (n != 1) {
            if (seen.count(n)) return false; 
            seen.insert(n);
            n = sum(n);
        }
        return true;
    }
};