class Solution {
public:
    bool checkRecord(string s) {
        int totalA = 0;

        for (size_t i = 0; i < s.size(); i++) {
            if (s[i] == 'A') {
                totalA++;
                if (totalA == 2) return false;
            }

            if (i + 2 < s.size()) {
                if (s[i] == 'L' && s[i + 1] == 'L' && s[i + 2] == 'L') return false;
            }
        }

        return true;
    }
};