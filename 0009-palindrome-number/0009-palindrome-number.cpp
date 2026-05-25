class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;
        // int y = x;
        int reversedHalf = 0;

        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + (x % 10);
            x = x  / 10;
        }

        if (reversedHalf == x) return true;
        if (reversedHalf / 10 == x) return true;
        return false;

        // while (x != 0) {
        //     reversed = reversed * 10 + (x % 10);
        //     x = (x - x % 10) / 10;
        //     cout << reversed << endl;
        //     cout << x << endl;
        // }
        // return reversed == y;
    }
};
