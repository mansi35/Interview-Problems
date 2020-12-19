class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int N = points.size();
        if (N < 2)
            return N;
​
        int maxPoint = 0;
        int curMax, overlapPoints, verticalPoints;
        map<vector<int>, int> slopeMap;
        for (int i = 0; i < N; i++) {
            curMax = overlapPoints = verticalPoints = 0;
            for (int j = i + 1; j < N; j++) {
                if (points[i][0] == points[j][0] and points[i][1] == points[j][1])
                    overlapPoints++;
                else if (points[i][0] == points[j][0])
                    verticalPoints++;
​
                else {
                    int yDif = points[j][1] - points[i][1];
                    int xDif = points[j][0] - points[i][0];
                    int g = __gcd(xDif, yDif);
                    yDif /= g;
                    xDif /= g;
                    vector<int> diff;
                    diff.push_back(xDif);
                    diff.push_back(yDif);
                    slopeMap[diff]++;
                    curMax = max(curMax, slopeMap[diff]);
                }
​
                curMax = max(curMax, verticalPoints);
            }
​
            maxPoint = max(maxPoint, curMax + overlapPoints + 1);
            slopeMap.clear();
        }
​
        return maxPoint;
    }
};
