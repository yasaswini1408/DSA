class Solution {
public:
    bool queryString(string s, int n) {
        for(int i=1;i<=n;i++){
            bitset<32>p(i);
            string bs=p.to_string();
            size_t pos = bs.find('1');
            bs=bs.substr(pos);
            if(s.find(bs)==string::npos) return false;
        }
        return true;
    }
};