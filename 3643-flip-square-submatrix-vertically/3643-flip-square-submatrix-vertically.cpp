class Solution {
public:
    void transpose(vector<vector<int>>&v){
        vector<vector<int>>r(v[0].size(),vector<int>(v.size()));
            for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                r[j][i]=v[i][j];
            }
        }
        v=r;
    }
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        transpose(grid);
        int p=y,q=x;
        int a=y+k,b=x+k;
        for (int i = p; i < a; i++) {
            reverse(grid[i].begin()+ q,grid[i].begin()+q+k);  
        }
        transpose(grid);
        return grid;
    }
};