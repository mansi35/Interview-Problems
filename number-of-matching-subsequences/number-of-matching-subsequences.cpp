class Solution {
public:
    int numMatchingSubseq(string S, vector<string>& words) {
        unordered_map<string, int> umap;
        for(string s : words) 
            umap[s]++;
        int count = 0;
        for (auto word: umap) {
            int k = 0, j = 0;
            while (j < S.length() and k < word.first.length()) {
                if (word.first[k] == S[j]) {
                    k++;
                }
                j++;
            }
            if (k == word.first.length())
                count += word.second;
        }
        return count;
    }
};
