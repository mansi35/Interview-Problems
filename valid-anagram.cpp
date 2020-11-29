class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char, int> umap;
        for (int i = 0; i < s.length(); i++) {
            umap[s[i]] += 1;
            umap[t[i]] -= 1;
        }
        for (int i = 0; i < s.length(); i++) {
            if (umap[s[i]] != 0)
                return false;
        }
        return true;
    }
};
