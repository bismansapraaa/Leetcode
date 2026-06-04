class Solution {
public:
    int missingNumber(vector<int>& nums) {
         int count = nums.size();
         vector<int> hash(count+1 , 0);
         for(int i = 0; i<count ; i++)
         {
            hash[nums[i]] = 1;
         }
         for(int i =0; i<=count;i++)
         {
             if(hash[i] == 0){
                return i;
            }
         }       
        return -1;
    }
};