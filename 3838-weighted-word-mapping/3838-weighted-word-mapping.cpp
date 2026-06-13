class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res;
        for(auto i:words){
            string p=i;
            int sum=0;
            for(int j=0;j<p.size();j++){
                sum+=weights[p[j]-'a'];
            }
            res+=char('z'-(sum%26));
        }
        return res;
    }
};