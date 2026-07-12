class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>res=arr,ans;
        sort(res.begin(),res.end());
        map<int,int>m;
        int c=1;
        for(int i=0;i<res.size();i++){
            if(m.find(res[i])==m.end())
                m[res[i]]=c++;
        }
        for(auto i:arr){
            ans.push_back(m[i]);
        }
        return ans;
    }
};