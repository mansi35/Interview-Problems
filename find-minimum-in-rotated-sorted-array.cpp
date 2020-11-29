class Solution {
public:
    int findMin(vector<int>& a) {
        int start = 0, end = a.size() - 1;
        while (start < end) {
            int mid = (start + end) / 2;
            if (a[end] > a[mid])
                end = mid;
            else
                start = mid+1;
        }
        return a[end];
    }
};
