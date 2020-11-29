class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0, m, n;
        m = t.size();
        n = s.size();
        string a = "";
        while (i < m and j < n) {
            if (s[j] != t[i])
                i++;
            else {
                a += s[j];
                j++;
                i++;
            }
        }
        return a == s;
    }
};
