class Solution {
public:
    bool isPalindrome(int x) {
        int y = x;
        if (x < 0) return false;
        long long newX = 0;
        if (x) {
            while (x) {
                newX = newX * 10 + x % 10;
                x = x / 10;
            }
        }
        if (y == newX) {
            return true;
        }
        else {
            return false;
        }
    }
};