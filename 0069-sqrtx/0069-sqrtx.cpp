class Solution {
public:
    int mySqrt(int x) {
        int low = 0;
        int high = x/2;
        if(x == 1)
        {
            return 1;
        }
        while(low<=high)
        {
            int mid = low + (high - low) /2;
            long long square = 1LL * mid * mid;
            if(square == x)
            {
                return mid;
            }
            else if(square < x)
            {
                low = mid + 1;
            }
            else
            {
                high = mid -1;
            }
        }
        return high;
    }
};