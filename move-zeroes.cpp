class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int start = 0, end = nums.size() - 1;
        // while (start <= end) {
        //     if (nums[start] == 0) {
        //         swap(nums[start], nums[end]);
        //         end--;
        //         if (nums[start] != 0)
        //             start++;
        //     }
        //     start++;
        // }
        for (int curr = 0, lastNonZero = 0; curr < nums.size(); curr++) {
            if (nums[curr] != 0) {
                swap(nums[lastNonZero++], nums[curr]);
            }
        }
    }
};
