class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        if(n % 2 == 0 || n % 3 == 0 || n % 1 == 0){
            return false;
        }
        return true;
    }
};