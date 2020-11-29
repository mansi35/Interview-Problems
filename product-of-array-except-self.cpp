class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int pre = 1, suf = 1;
        vector<int> ans(n, 1);
        for (int i = 0; i < n-1; i++){
            pre *= nums[i];
            suf *= nums[n-1-i];
            ans[i+1] *= pre;
            ans[n-i-2] *= suf;
        }
        return ans;
    }
};
