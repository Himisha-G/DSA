#include <vector>

class Solution {
private:
    int solve(int i, int j, std::vector<std::vector<int>>& obstacleGrid, std::vector<std::vector<int>>& dp) {
        // Base Case 1: Out of bounds check
        if (i >= obstacleGrid.size() || j >= obstacleGrid[0].size()) {
            return 0;
        }
        
        // Base Case 2: Hit an obstacle
        if (obstacleGrid[i][j] == 1) {
            return 0;
        }
        
        // Base Case 3: Reached the bottom-right destination
        if (i == obstacleGrid.size() - 1 && j == obstacleGrid[0].size() - 1) {
            return 1;
        }
        
        // Base Case 4: Return cached result if already calculated
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        
        // Move down and move right, then cache the sum of paths
        int down = solve(i + 1, j, obstacleGrid, dp);
        int right = solve(i, j + 1, obstacleGrid, dp);
        
        return dp[i][j] = down + right;
    }

public:
    int uniquePathsWithObstacles(std::vector<std::vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        
        // Initialize DP table with -1
        std::vector<std::vector<int>> dp(m, std::vector<int>(n, -1));
        
        // Start traversal from top-left cell (0, 0)
        return solve(0, 0, obstacleGrid, dp);
    }
};
