class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int i;
        priority_queue<int> bricksUsed;
        for(i = 0; i < heights.size()-1; i++)
        {
            int diff = heights[i+1] - heights[i];
            if(diff <= 0)
                continue;
            if(diff <= bricks)
            {
                bricks = bricks - diff;
                bricksUsed.push(diff);
            }
            else if(ladders > 0)
            {
                if(!bricksUsed.empty() && diff < bricksUsed.top())
                {
                    bricks = bricks + bricksUsed.top();
                    bricksUsed.pop();
                    bricksUsed.push(diff);
                    bricks=bricks - diff;
                }
                ladders--;
            }
            else
                break;
        }
        return i;
    }
};
