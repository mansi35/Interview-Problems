class Solution {
public:
    string maximumTime(string time) {
        string hour = time.substr(0, time.find(":"));
        string min = time.substr(time.find(":")+1, time.length());
        if (hour[0] == '?' and hour[1] == '?') {
            hour[0] = '2';
            hour[1] = '3';
        }
        else if (hour[0] == '2' and hour[1] == '?')
            hour[1] = '3';
        else if (hour[0] == '?' and hour[1] < '4')
            hour[0] = '2';
        else if (hour[0] == '?' and hour[1] >= '4')
            hour[0] = '1';
        else if (hour[1] == '?')
            hour[1] = '9';
        
        if (min[0] == '?' and min[1] == '?') {
            min[0] = '5';
            min[1] = '9';
        }
        else if (min[0] == '?')
            min[0] = '5';
        else if (min[1] == '?')
            min[1] = '9';
        return hour + ":" + min;
    }
};
