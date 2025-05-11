class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> map;

        for (const auto& c : s) map[c]++;

        for (const auto& c : t) {
            map[c]--;
            if (map[c] < 0) return false;
        }

        return true;
    }
};