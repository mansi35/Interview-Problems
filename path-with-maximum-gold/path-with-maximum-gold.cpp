class Solution {
public:
    bool isValid(vector<vector<int>>& mat, int row, int col, vector<vector<int>>& visited) {
        int ROW = mat.size();
        int COL = mat[0].size();
        return (row >= 0) && (row < ROW) && (col >= 0) && (col < COL) && (!visited[row][col]) && mat[row][col];
    }
    
    int DFS(vector<vector<int>>& mat, int row, int col,vector<vector<int>>& visited) {
        int rowNbr[] = { -1, 0, 0, 1 };
        int colNbr[] = { 0, -1, 1, 0 };
​
        int ans = 0;
​
        for (int k = 0; k < 4; k++) {
            int rownbr = row + rowNbr[k];
            int colnbr = col + colNbr[k];
            if (isValid(mat, rownbr, colnbr, visited)) {
                visited[rownbr][colnbr] = 1;
                ans = max(ans, mat[rownbr][colnbr] + DFS(mat, rownbr, colnbr, visited));
                visited[rownbr][colnbr] = 0;
            }
        }
        return ans;
    }
    
    
    int getMaximumGold(vector<vector<int>>& mat) {
        vector<vector<int>> visited(mat.size(),vector<int>(mat[0].size(),0));
        int ans = INT_MIN;
        int row = mat.size();
        int col = mat[0].size();
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++) {
                if (mat[i][j]) {
                    visited[i][j] = 1;
                    ans = max(ans, mat[i][j] + DFS(mat, i, j, visited));
                    visited[i][j] = 0;
                }
            }
        return ans;
    }
};
