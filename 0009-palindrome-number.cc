class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        auto i = 0l;
        auto num = x;
        while (num != 0) {
            i = i * 10 + num % 10;
            num /= 10;
        }
        if (i == x)
            return true;
        else
            return false;
    }
};
