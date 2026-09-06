class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(char ch:s) mp[ch]++;
        vector<pair<char,int>> v;
        for(auto p:mp) v.push_back({p.first,p.second});
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            return a.second>b.second;
        });
        string ans;
        for(auto &p:v)
            for(int i=0;i<p.second;i++) ans+=p.first;
        return ans;
    }
};

