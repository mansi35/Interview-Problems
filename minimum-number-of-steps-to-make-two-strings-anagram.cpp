class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> umap1, umap2;
        for (int i = 0; i < s.length(); i++) {
            umap1[s[i]] += 1;
            umap2[t[i]] += 1;
        }
        int result = 0;
        for (auto i: umap1) {
            if (umap2[i.first] - i.second < 0)
                result += i.second - umap2[i.first];
        }
        return result;
    }
};
