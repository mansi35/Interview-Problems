class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count = 0;
        int n = arr.size();
        int csum[n+1];
        csum[0] = arr[0];
        for (int i = 1; i < n; i++) {
            csum[i] = arr[i] + csum[i-1];
        }
​
        if (csum[k-1]/k >= threshold)
            count++;
        for (int i = 1; i < n - k + 1; i++) {    
            if ((csum[i+k-1] - csum[i-1])/k >= threshold)
                count++;
        }
        return count;
    }
};
