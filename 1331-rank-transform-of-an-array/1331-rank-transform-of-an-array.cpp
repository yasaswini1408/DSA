class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        // vector<int>res=arr,ans;
        // sort(res.begin(),res.end());
        // map<int,int>m;
        // int c=1;
        // for(int i=0;i<res.size();i++){
        //     if(m.find(res[i])==m.end())
        //         m[res[i]]=c++;
        // }
        // for(auto i:arr){
        //     ans.push_back(m[i]);
        // }
        // return ans;


        vector<int> res = arr;
        sort(res.begin(), res.end());
        res.erase(unique(res.begin(), res.end()), res.end());
        unordered_map<int,int> rank;
        for(int i=0; i<res.size(); i++){
            rank[res[i]] = i+1; 
        }
        vector<int> ans;
        for(auto x : arr){
            ans.push_back(rank[x]);
        }
        return ans;
    }
};