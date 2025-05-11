class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> stack;
        vector<int> result = prices;

        for (size_t i = 0; i < prices.size(); i++) {
            while (!stack.empty() && prices[i] <= prices[stack.top()]) {
                result[stack.top()] -= prices[i];
                stack.pop();
            }

            stack.push(i);
        }

        return result;
    }
};