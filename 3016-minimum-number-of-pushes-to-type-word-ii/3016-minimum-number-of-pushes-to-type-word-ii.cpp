class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> m;
        for(auto c : word) m[c]++;
        vector<pair<char,int>> v(m.begin(), m.end());
        sort(v.begin(), v.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });
        int k = 0;
        for(int i = 0; i < v.size(); i++) {
            k += ((i / 8) + 1) * v[i].second;
        }
        return k;
    }
};
