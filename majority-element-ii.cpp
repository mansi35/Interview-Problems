class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> umap;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            umap[nums[i]] += 1;
        }
        vector<int> result;
        for (auto i: umap) {
            if (i.second > floor(n/3) and find(result.begin(), result.end(), i.first) == result.end())
                result.push_back(i.first);
        }
        return result;
    }
};
