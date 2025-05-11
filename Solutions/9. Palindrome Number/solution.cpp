class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        string str_x = to_string(x);
        string temp_x = to_string(x);

        int left = 0;
        int rigth = str_x.length() - 1;

        while (left < rigth) {
            swap(str_x[left], str_x[rigth]);
            left++;
            rigth--;
        }

        return temp_x == str_x;
    }
};