class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        for (int curr = 0, lastEven = 0; curr < nums.size(); curr++) {
            if (nums[curr] % 2 == 0) {
                swap(nums[lastEven++], nums[curr]);
            }
        }
        return nums;
    }
};
