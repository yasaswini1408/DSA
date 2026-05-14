class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        vector<vector<int>>res=m;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(m[i][j]==0){
                    for(int p=0;p<m[0].size();p++) res[i][p]=0;
                    for(int q=0;q<m.size();q++) res[q][j]=0;
                }
            }
        }
        m=res;
    }
};