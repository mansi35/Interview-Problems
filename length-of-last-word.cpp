class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int i = s.length()-1;
        while(s[i] == ' ' and i >= 0)
        {
            i--;
        }
        for (; s[i] != ' ' and i >= 0; i--) {
            count++;
        }
        return count;
    }
};
