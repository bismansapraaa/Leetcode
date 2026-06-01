class Solution {
public:
    int kthGrammar(int n, int k) {
        bool isAns = true;
         n = pow(2,n-1);
         while(n!=1)
         {
           n=n/2;
           if(k>n)
           {
            k=k-n;
            isAns =! isAns;

           }
         }
         return ((isAns) ? 0 : 1);


    }
};