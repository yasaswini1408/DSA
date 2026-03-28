class Solution {
public:
    // int res=INT_MAX;
    // void solve(int i,int j,int s,vector<vector<int>>&g){
    //     int m=g.size();
    //     int n=g[0].size();
    //     s^=g[i][j];
    //     if(i==m-1 and j==n-1){
    //         res=min(res,s);
    //         return ;
    //     }
    //     if(i+1<m){
    //         solve(i+1,j,s,g);
    //     }
    //     if(j+1<n){
    //         solve(i,j+1,s,g);
    //     }
    // }
    int minCost(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<unordered_set<int>>>d(m,vector<unordered_set<int>>(n));
        d[0][0].insert(grid[0][0]);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                for(auto x:d[i][j]){
                    if(i+1<m){
                        d[i+1][j].insert(x^grid[i+1][j]);
                    }
                    if(j+1<n){
                        d[i][j+1].insert(x^grid[i][j+1]);
                    }
                }
            }
        }
        int res=INT_MAX;
        for(auto i:d[m-1][n-1]){
            res=min(res,i);
        }
        return res;
    }
};