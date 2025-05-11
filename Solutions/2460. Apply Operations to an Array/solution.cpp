class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for (size_t i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }

        size_t pos = 0;

        for (size_t i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[pos] = nums[i];
                if (i != pos) nums[i] = 0;
                pos++;
            }
        }

        return nums;
    }
};