class Solution {
public:
    string toBinary(int n) {
        if (n == 0)
            return "0";
        string res = "";
        while (n > 0) {
            res = char((n % 2) + '0') + res;
            n /= 2;
        }
        return res;
    }
    int toNumber(string s) {
        int num = 0;
        for (char c : s) {
            num = num * 2 + (c - '0');
        }
        return num;
    }
    int findComplement(int n) {
        string bin = toBinary(n);
        for (char& c : bin) {
            c = (c == '0') ? '1' : '0';
        }
        return toNumber(bin);
    }
};