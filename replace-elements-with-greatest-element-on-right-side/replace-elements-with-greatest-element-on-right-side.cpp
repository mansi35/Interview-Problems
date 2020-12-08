class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int temp = arr[n-1];
        arr[n-1] = -1;
        for (int i = n-2; i >= 0; i--) {
            int temp1 = arr[i];
            arr[i] = temp;
            temp = max(temp, temp1);
        }
        return arr;
    }
};
