class Solution {
public:
    struct customCompare {
        bool operator() (vector<int> &a, vector<int> &b) {
            if (a[0] == b[0])
                return a[1] > b[1];
            return a[0] < b[0];
        }
    };
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        priority_queue<vector<int>, vector<vector<int>>, customCompare> Q;
        vector<vector<int>> res;
        for (auto &p: people) {
            Q.push(p);
        }
        while (!Q.empty()) {
            auto p = Q.top();
            res.insert(res.begin() + p[1], p);
            Q.pop();
        }
        return res;
    }
};
