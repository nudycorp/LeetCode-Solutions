class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stack;
        string result = "";

        for (char c : s) {
            if (!stack.empty() && c == stack.top()) stack.pop();
            else stack.push(c);
        }

        while (!stack.empty()) {
            result = stack.top() + result;
            stack.pop();
        }

        return result;
    }
};