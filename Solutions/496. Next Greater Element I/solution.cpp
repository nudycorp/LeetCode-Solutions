class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        vector<int> nge(nums2.size(), -1);

        for (int i = nums2.size() - 1; i >= 0; i--) {
            while (!s.empty() && s.top() <= nums2[i]) {
                s.pop();
            }
            if (!s.empty()) {
                nge[i] = s.top();
            }
            s.push(nums2[i]);
        }

        vector<int> result;
        for (int num : nums1) {
            for (size_t i = 0; i < nums2.size(); i++) {
                if (nums2[i] == num) {
                    result.push_back(nge[i]);
                    break;
                }
            }
        }

        return result;
    }
};