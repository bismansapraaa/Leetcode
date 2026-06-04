class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int count = nums.size();
         vector<int> hash(count+1 , 0);
         for(int i = 0; i<count ; i++)
         {
            hash[nums[i]] = 1;
         }
         vector<int> ans;
         for(int i =1; i<=count;i++)
         {
             if(hash[i] == 0){
              ans.push_back(i);
            }
         }       
      return ans;
    }
    
};