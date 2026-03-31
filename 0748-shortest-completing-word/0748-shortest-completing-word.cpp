class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        string s = "";
        for (auto i : licensePlate) {
            if (isalpha(i)) s += tolower(i);
        }
        string ans = "";
        for (auto w : words) {
            string temp = w;
            for (auto &c : temp) c = tolower(c);
            string copy = temp;
            bool ok = true;
            for (auto c : s) {
                int pos = copy.find(c);
                if (pos == string::npos) {
                    ok = false;
                    break;
                } else {
                    copy.erase(pos, 1); 
                }
            }
            if (ok) {
                if (ans == "" || w.size() < ans.size()) {
                    ans = w;
                }
            }
        }
        return ans;
    }
};