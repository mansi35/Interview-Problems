class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set<char> uset;
        int count = 0;
        for (int i = 0; i < J.length(); i++) {
            uset.insert(J[i]);
        }
        for (int i = 0; i < S.length(); i++) {
            if (uset.find(S[i]) != uset.end()) {
                count++;
            }
        }
        return count;
    }
};
