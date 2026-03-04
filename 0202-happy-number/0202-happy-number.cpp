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
        if (n == 1 or n == 7) return true;
        else if (n < 10) return false;
        else return isHappy(sum(n));
    }
};