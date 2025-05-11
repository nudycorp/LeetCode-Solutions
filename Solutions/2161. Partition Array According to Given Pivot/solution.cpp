class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> result;

        for (int& n : nums) if (n < pivot) result.push_back(n);
        for (int& n : nums) if (n == pivot) result.push_back(n);
        for (int& n : nums) if (n > pivot) result.push_back(n);

        return result;
    }
};