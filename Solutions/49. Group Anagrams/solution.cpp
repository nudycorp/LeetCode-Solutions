class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> map;

        for (const string& str : strs) {
            string sorted_str = str;
            sort(sorted_str.begin(), sorted_str.end());

            map[sorted_str].push_back(str);
        }

        for (auto& pair : map) result.push_back(pair.second);

        return result;
    }
};