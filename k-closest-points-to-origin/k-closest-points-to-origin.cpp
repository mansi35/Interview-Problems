class Solution {
public:
    struct compare {
        bool operator()(const vector<int>& p1, const vector<int>& p2)
        {
            return sqrt(p1[0] * p1[0] + p1[1] * p1[1]) > sqrt(p2[0] * p2[0] + p2[1] * p2[1]);
        }
    };
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        priority_queue<vector<int>, vector<vector<int>>, compare> q;
        for (auto point : points)
            q.push(point);
        vector<vector<int>> result;
        while (K--) {
            result.push_back(q.top());
            q.pop();
        }
        return result;
    }
};