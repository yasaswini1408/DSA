class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        // vector<char>a={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        unordered_map<char,int>m;
        // for(int i=0;i<a.size();i++){
        //     m[a[i]]=weights[i];
        // }
        for(int i=0;i<26;i++){
            m[i+'a']=weights[i];
        }
        string r;
        for(auto i:words){
            int s=0;
            for(char c:i){
                s+=m[c];
            }
            r+='z'-(s%26);
        }
        return r;
    }
};