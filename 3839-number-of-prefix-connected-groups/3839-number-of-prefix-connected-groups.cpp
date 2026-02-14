class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        unordered_map<string,int>m;
        for(auto i:words){
            if(i.size()>=k){
                string s(i.begin(),i.begin()+k);
                m[s]++;
            }
        }
        int r=0;
        for(auto i:m){
            if(i.second>=2) r++;
        }
        return r;
    }
};