class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> umap;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            umap[nums[i]] += 1;
        }
        int largest = 0;
        int maximum = 0;
        int maxElement = -1;
        for (auto i: umap) {
            if (i.second > largest and i.second > n/2)
                largest = i.second;
            if (largest > maximum) {
                maximum = largest;
                maxElement = i.first;
            }
        }
        return maxElement;
    }
};
