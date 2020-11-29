class Solution {
public:    
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<int> result;
        unordered_map<int, int> umap;
        for (int i = 0; i < arr.size(); i++)
        {
            if (umap.find(target - arr[i]) != umap.end())
            {
                result.push_back(i);
                result.push_back(umap[target - arr[i]]);
                return result;
            }
            umap[arr[i]] = i;
        }
        return result;
    }
};
