class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        unordered_map<char, int> map{
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        for (size_t i = 0; i < s.size(); i++) {
            if (i < s.size() - 1 && map[s[i]] < map[s[i + 1]]) result -= map[s[i]];
            else result += map[s[i]];
        }

        return result;
    }
};