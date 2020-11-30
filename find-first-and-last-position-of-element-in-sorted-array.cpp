class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        vector<int> result;
        int targetStart = -1, targetEnd = -1;
        while (start <= end) {
            int mid = (start+end)/2;
            if (nums[mid] == target) {
                targetStart = mid;
                end = mid-1;
            }
            else if (nums[mid] > target) {
                end = mid - 1;
            }
            else 
                start = mid + 1;
        }
        result.push_back(targetStart);
        start = 0;
        end = nums.size() - 1;
        while (start <= end) {
            int mid = (start+end)/2;
            if (nums[mid] == target) {
                targetEnd = mid;
                start = mid+1;
            }
            else if (nums[mid] > target) {
                end = mid - 1;
            }
            else 
                start = mid + 1;
        }
        result.push_back(targetEnd);
        return result;
    }
};
