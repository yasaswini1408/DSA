class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        
        int c=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    bool p=true;
                    for(int k=0;k<mat.size();k++){
                        if(k!=i and mat[k][j]==1){
                            p=false;break;
                        }
                    }
                    for(int k=0;k<mat[0].size();k++){
                        if(k!=j and mat[i][k]==1){
                            p=false;break;
                        }
                    }
                    if(p==true) c++;
                }
                
            }
        }
        return c;
    }
};