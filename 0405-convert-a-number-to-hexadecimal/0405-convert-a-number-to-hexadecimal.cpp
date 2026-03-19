class Solution {
public:
    string toHex(int num) {
        if(num==0) return "0";
        stringstream s;
        s<<hex<<num;
        return s.str();
    }
};