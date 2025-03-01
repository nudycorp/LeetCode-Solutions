class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;

        for (char& c : s) {
            stack.push(c);

            if (stack.size() >= 3 && stack.top() == 'c') {
                char third = stack.top(); stack.pop();
                char second = stack.top(); stack.pop();
                char first = stack.top(); stack.pop();

                if (first == 'a' && second == 'b' && third == 'c') continue;
                else {
                    stack.push(first);
                    stack.push(second);
                    stack.push(third);
                }
            }
        }

        return stack.empty();
    }
};