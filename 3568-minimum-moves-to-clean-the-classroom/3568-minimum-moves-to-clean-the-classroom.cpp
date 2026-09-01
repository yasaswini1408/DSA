class Solution {
public:
    int minMoves(vector<string>& classroom, int energy) {
        int m = classroom.size(), n = classroom[0].size();
        int startR = -1, startC = -1;
        vector<pair<int, int>> litter;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (classroom[i][j] == 'S') {
                    startR = i;
                    startC = j;
                } else if (classroom[i][j] == 'L') {
                    litter.push_back({i, j});
                }
            }
        }
        int numLitter = litter.size();
        int targetMask = (1 << numLitter) - 1;
        if (targetMask == 0) return 0;
        vector<vector<vector<int>>> dist(m, vector<vector<int>>(n, vector<int>(1 << numLitter, -1)));
        queue<tuple<int, int, int, int>> q;
        dist[startR][startC][0] = energy;
        q.push({startR, startC, 0, 0});
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};
        while (!q.empty()) {
            auto [r, c, mask, moves] = q.front();
            q.pop();
            int currEnergy = dist[r][c][mask];
            for (int i = 0; i < 4; ++i) {
                int nr = r + dr[i], nc = c + dc[i];
                if (nr < 0 || nr >= m || nc < 0 || nc >= n || classroom[nr][nc] == 'X') continue;
                int nextEnergy = currEnergy - 1;
                if (nextEnergy < 0) continue;
                if (classroom[nr][nc] == 'R') nextEnergy = energy;
                int nextMask = mask;
                if (classroom[nr][nc] == 'L') {
                    for (int k = 0; k < numLitter; ++k) {
                        if (litter[k].first == nr && litter[k].second == nc) {
                            nextMask |= (1 << k);
                            break;
                        }
                    }
                }
                if (nextMask == targetMask) return moves + 1;
                if (nextEnergy > dist[nr][nc][nextMask]) {
                    dist[nr][nc][nextMask] = nextEnergy;
                    q.push({nr, nc, nextMask, moves + 1});
                }
            }
        }
        return -1;
    }
};