class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;

        for (int n : nums1) {
            size_t index = -1;
            for (size_t i = 0; i < nums2.size(); i++) {
                if (nums2[i] == n) {
                    index = i;
                    break;
                }
            }

            if (index == -1) result.push_back(-1);

            bool check = false;

            for (size_t i = index + 1; i < nums2.size(); i++) {
                if (nums2[i] > n) {
                    result.push_back(nums2[i]);
                    check = true;
                    break;
                }
            }

            if (!check) result.push_back(-1);
        }

        return result;
    }
};