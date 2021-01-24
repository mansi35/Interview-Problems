class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        priority_queue<int> q;
        int r = matrix.size()+1;
        int c = matrix[0].size()+1;
        vector<vector<int>> value(r, vector<int> (c, 0));
        for (int i = 1; i < r; i++) {
            for (int j = 1; j < c; j++) {
                value[i][j] = matrix[i-1][j-1] xor value[i-1][j] xor value[i][j-1] xor value[i-1][j-1];
                q.push(value[i][j]);
            }
        }
        k -= 1;
        while (k--) {
            q.pop();
        }
        return q.top();
    }
};
