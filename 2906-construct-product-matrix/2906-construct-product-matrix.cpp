class Solution {
public:
    const int mod=12345;

    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        long long k=1;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(k>LLONG_MAX) k=k%mod;
                k*=(grid[i][j]);
            }
        }
        vector<vector<int>>r(grid.size(),vector<int>(grid[0].size()));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                r[i][j]=(k/grid[i][j])%mod;
            }
        }
        return r;
    }
};