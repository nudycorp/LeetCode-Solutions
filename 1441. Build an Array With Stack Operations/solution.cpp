class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> result;

        int targetIndex = 0;

        for (size_t i = 1; i <= n; i++) {
            result.push_back("Push");
            if (targetIndex < target.size() && target[targetIndex] == i) targetIndex++;
            else result.push_back("Pop");
            if (targetIndex == target.size()) break;
        }

        return result;
    }
};