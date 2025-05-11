class Solution {
public:
    int lengthOfLastWord(string s) {
        int end = s.length() - 1;

        while (end >= 0 && isspace(s[end])) {
            end--;
        }

        if (end < 0) return 0;

        int start = end;

        while (start >= 0 && !isspace(s[start])) {
            start--;
        }

        return end - start;
    }
};