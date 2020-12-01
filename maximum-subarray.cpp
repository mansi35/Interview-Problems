class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cumSum = 0, maxSum = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            cumSum += nums[i];
            maxSum = max(cumSum, maxSum);
            if (cumSum < 0)
                cumSum = 0;
        }
        return maxSum;
    }
};
