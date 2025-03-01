class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> stack;

        int endIndex = 0;

        for (size_t i = 0; i < word.size(); i++) {
            stack.push(word[i]);
            if (ch == word[i]) {
                endIndex = i;
                break;
            }
        }

        for (size_t i = 0; endIndex != 0 && (i < (endIndex + 1)); i++) {
            word[i] = stack.top();
            stack.pop();
        }

        return word;
    }
};