class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTriangle;
        for (int i = 0; i < numRows; i++) {
            vector<int> pascalRow;
            for (int j = 0; j < i+1; j++)
                pascalRow.push_back(1);
            pascalTriangle.push_back(pascalRow);
        }
        for (int i = 2; i < numRows; i++) {
            for (int j = 1; j < i; j++)
                pascalTriangle[i][j] = pascalTriangle[i-1][j-1] + pascalTriangle[i-1][j];
        }
        return pascalTriangle;
    }
};
