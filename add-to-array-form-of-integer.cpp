class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        int N = A.size();
        int cur = K;
        vector<int> ans;
​
        int i = N;
        while (--i >= 0 || cur > 0) {
            if (i >= 0)
                cur += A[i];
            ans.push_back(cur % 10);
            cur /= 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
