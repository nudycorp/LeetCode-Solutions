class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> map;

        for (char c : s) map[c]++;

        for (size_t i = 0; i < s.size(); i++) if (map[s[i]] == 1) return i;

        return -1;
    }
};