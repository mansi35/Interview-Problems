class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> umap;
        for (int i = 0; i < s.length(); i++)
            umap[s[i]] += 1;
        for (int i = 0; i < t.length(); i++)
            umap[t[i]] -= 1;
        for (int i = 0; i < t.length(); i++) {
            if (umap[t[i]] != 0)
                return t[i];
        }
        return '-1';
    }
};
