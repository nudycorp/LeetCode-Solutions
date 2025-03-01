class Solution {
public:
    int minSwaps(string s) {
        stack<char> stack;
        int disbalance = 0;

        for (char& c : s) {
            if (c == '[') stack.push(c);
            else {
                if (!stack.empty()) stack.pop();
                else disbalance++;
            }
        }

        return (disbalance + 1) / 2;
    }
};