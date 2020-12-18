class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        long long int reversed = 0, remainder, temp = x;
        while (temp != 0) {
            remainder = temp % 10;
            reversed = reversed * 10 + remainder;
            temp = temp / 10;
        }
        return reversed == x;
    }
};
