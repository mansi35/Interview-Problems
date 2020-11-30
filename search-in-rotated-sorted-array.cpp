class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size()-1;
        while (start <= end) {
            int mid = (start + end) / 2;
            if (nums[mid] == target)
                return mid;
            if (nums[start] <= nums[mid]) {
                if (target >= nums[start] and target <= nums[mid])
                    end = mid - 1;
                else
                    start = mid + 1;
            }
            else if (nums[mid] <= nums[end]) {
                if (target > nums[mid] and target <= nums[end])
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }
        return -1;
    }
};
