class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, maxcount = 0;
        for (auto& it : nums) {
            if (it == 0)
                count = 0;
            else {
                count++;
                maxcount = max(count, maxcount);
            }
        }
        return maxcount;
    }
};
