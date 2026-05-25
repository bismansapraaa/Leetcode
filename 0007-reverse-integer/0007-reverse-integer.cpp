class Solution {
public:
    int reverse(int x) {
     long a = 0;
     long b = x;
     while(x!=0)
     {
        if(a>INT_MAX/10 || a<INT_MIN/10)
        {
            return 0;
        }
        a=(a*10) + (x%10);
        
        x=x/10;
     }
     return a;
    }
};
