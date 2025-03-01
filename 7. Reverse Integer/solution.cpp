class Solution {
public:
    int reverse(int x) {
        string x_string = to_string(x);

        long long result;

        int left;
        int rigth;

        if (x_string[0] == '-') {
            left = 1;
            rigth = x_string.length() - 1;
        }
        else {
            left = 0;
            rigth = x_string.length() - 1;
        }

        while (left < rigth) {
            swap(x_string[left], x_string[rigth]);
            left++;
            rigth--;
        }

        result = stoll(x_string);

        if (result > INT_MAX || result < INT_MIN) return 0;

        static_cast<int>(result);

        return result;
    }
};