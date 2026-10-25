class Solution {
public:
    int reverse(int n)
    {
        int a = 0;
        while(n > 0)         
        {
            a = a * 10 + (n % 10);
            n /= 10;
        }
        return a;
    }

    int mirrorDistance(int n) {
        return(abs(n - reverse(n)));
    }
};