class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;

        for (char c : s) {
            if (c == '(' or c == '{' or c == '[') {
                stack.push(c);
            }
            else if (c == ')' or c == '}' or c == ']') {
                if (stack.empty()) return false;

                char top = stack.top();
                stack.pop();

                if ((c == ')' && top != '(' ||
                    c == '}' && top != '{' ||
                    c == ']' && top != '[')) {
                    return false;
                }
            }
        }

        return stack.empty();
    }
};