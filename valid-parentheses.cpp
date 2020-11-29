class Solution {
public:
    bool isValid(string s) {
        stack<char> parentheses;
        unordered_map<char, char> parentheses_pairs;
        parentheses_pairs[')'] = '(';
        parentheses_pairs[']'] = '[';
        parentheses_pairs['}'] = '{';
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' or s[i] == '[' or s[i] == '{')
                parentheses.push(s[i]);
            else if (!parentheses.empty() and parentheses.top() == parentheses_pairs[s[i]])
                parentheses.pop();
            else
                return false;
        }
        return parentheses.empty();
    }
};
