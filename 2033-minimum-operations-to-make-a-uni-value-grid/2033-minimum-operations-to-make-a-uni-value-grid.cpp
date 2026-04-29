class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int step) {
        int rows = grid.size();
        int cols = grid[0].size();
        int totalElements = rows * cols;
        int count[10001] = {0};
        int minVal = grid[0][0];
        int maxVal = grid[0][0];
        for (const auto& row : grid) {
            for (int value : row) {
                if ((value - grid[0][0]) % step != 0)
                    return -1;
                count[value]++;
                minVal = min(minVal, value);
                maxVal = max(maxVal, value);
            }
        }
        int medianIndex = (totalElements + 1) / 2;
        int cumulativeCount = 0;
        int medianValue = minVal;
        for (int value = minVal; value <= maxVal; value += step) {
            cumulativeCount += count[value];
            if (cumulativeCount >= medianIndex) {
                medianValue = value;
                break;
            }
        }
        int operations = 0;
        for (int value = minVal; value <= maxVal; value += step) {
            int difference = abs(value - medianValue);
            int moves = difference / step;
            operations += moves * count[value];
        }
        return operations;
    }
};