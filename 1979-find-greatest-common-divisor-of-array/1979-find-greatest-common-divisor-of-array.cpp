class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        int maxx = *max_element(nums.begin(), nums.end());
         int minn = *min_element(nums.begin(), nums.end());
       /* for(int i =0; i<minn;i++ )
        {
            if(maxx%i ==0 && minn%i==0){
                gcd =i;
            }
           
        }*/
        return gcd(maxx,minn);

    }
};
