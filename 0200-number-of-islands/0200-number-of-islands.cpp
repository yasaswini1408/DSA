class Solution {
public:

    void bfs(int r, int c,vector<vector<int>>& mark,vector<vector<char>>& grid) {
        mark[r][c] = 1;
        queue<pair<int,int>> q;
        q.push({r, c});
        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, -1, 1};
        while(!q.empty()) {
            int nr = q.front().first;
            int nc = q.front().second;
            q.pop();
            for(int k = 0; k < 4; k++) {
                int row = nr + dr[k];
                int col = nc + dc[k];
                if(row >= 0 && row < grid.size() &&col >= 0 && col < grid[0].size() && grid[row][col] == '1' && mark[row][col] == 0) {
                    mark[row][col] = 1;
                    q.push({row, col});
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        int co = 0;
        vector<vector<int>> mark(r, vector<int>(c, 0));
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(grid[i][j] == '1' && mark[i][j] == 0) {
                    co++;
                    bfs(i, j, mark, grid);
                }
            }
        }
        return co;
    }
};