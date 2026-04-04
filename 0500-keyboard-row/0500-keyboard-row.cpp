class Solution {
public:
    vector<string> findWords(vector<string>& w) {
        vector<set<char>> r = {
            {'q','w','e','r','t','y','u','i','o','p'},
            {'a','s','d','f','g','h','j','k','l'},
            {'z','x','c','v','b','n','m'}
        };
        vector<string> v;
        int x;
        for (auto s : w) {
            if (r[0].count(tolower(s[0]))) x = 0;
            else if (r[1].count(tolower(s[0]))) x = 1;
            else x = 2;
            bool f = true;
            for (int i = 1; i < s.size(); i++)
                if (!r[x].count(tolower(s[i]))) { 
                    f = false; 
                    break; 
                }
            if (f) v.push_back(s);
        }
        return v;
    }
};