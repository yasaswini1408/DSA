class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_map<int,int>k;
        for(int i=0;i<bulbs.size();i++){
            k[bulbs[i]]++;
        }
        vector<int>r;
        for(auto i:k){
            if(i.second%2!=0) r.push_back(i.first);
        }
        sort(r.begin(),r.end());
        return r;
    }
};