class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int total = m * n;
        vector<int> flat;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                flat.push_back(grid[i][j]);
            }
        }
        k %= total;
        rotate(flat.begin(), flat.end() - k, flat.end());
        vector<vector<int>> newGrid(m, vector<int>(n));
        for (int i = 0; i < total; i++) {
            newGrid[i / n][i % n] = flat[i];
        }
        return newGrid;
    }
};
