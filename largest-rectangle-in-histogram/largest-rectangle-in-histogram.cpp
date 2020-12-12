class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        if(heights.empty())
        {
            return 0;
        }
        stack<int> histogram;
        int n = heights.size();
        int area = 0;
        histogram.push(0);
        int i;
        for (i = 1; i < n; i++) {
            while (!histogram.empty() and heights[i] < heights[histogram.top()]) {
                int top = histogram.top();
                histogram.pop();
                if (histogram.empty())
                    area = max(area, heights[top] * i);
                else
                    area = max(area, heights[top] * (i - histogram.top() - 1));
            }
            histogram.push(i);
        }
        while (!histogram.empty()) {
            int top = histogram.top();
            histogram.pop();
            if (histogram.size() == 0)
                area = max(area, heights[top] * n);
            else
                area = max(area, heights[top] * (i - histogram.top() - 1));
        }
        return area;
    }
};
