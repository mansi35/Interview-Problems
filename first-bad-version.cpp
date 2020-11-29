// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
​
class Solution {
public:
    int firstBadVersion(int n) {
        long long start = 1, end = n;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            
            if (mid - 1 >= 0 and isBadVersion(mid) and !isBadVersion(mid - 1))
                return mid;
            if (isBadVersion(mid))
                end = mid - 1;
            else
                start = mid + 1;
        }
        return -1;
    }
};
