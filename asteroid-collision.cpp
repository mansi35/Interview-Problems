class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> result;
        for (int i = 0; i < asteroids.size();) {
            if (asteroids[i] > 0 or result.empty())
                result.push_back(asteroids[i++]);
            else if (asteroids[i] < 0) {
                if (result.empty() or result.back() < 0)
                    result.push_back(asteroids[i++]);
                else {
                    if (abs(result.back()) == abs(asteroids[i])) {
                        result.pop_back();
                        i++;
                    }
                    else if (abs(result.back()) > abs(asteroids[i])) 
                        i++;
                    else
                        result.pop_back();
                } 
            }
        }
        return result;
    }
};
