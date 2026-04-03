class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int> v;
        v.push_back(1);
        for(int i = 1; i < s.size(); i++) {
            if(s[i] != s[i-1]) v.push_back(1);
            else v.back()++;
        }
        int ans = 0;
        for(int i = 1; i < v.size(); i++) {
            ans += min(v[i-1], v[i]);
        }
        return ans;
    }
};
// class Solution {
// public:
//     int countBinarySubstrings(string s) {
//         int k = 0;
//         int i = 0, j = 0;
//         while (i < s.size() and j < s.size()) {
//             string p = s.substr(i, j - i + 1);
//             int zero = count(p.begin(), p.end(), '0');
//             int one = count(p.begin(), p.end(), '1');
//             string a(zero, '0');
//             string b(one, '1');
//             if (zero == one) {
//                 if (p.find(a) != string::npos and p.find(b) != string::npos)
//                     k++;
//             } 
//             if(j==s.size()-1) i++;
//             j++;

//         }
//          return k;
//     }
   
// };