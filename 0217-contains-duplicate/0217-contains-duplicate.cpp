class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> map{0};       
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]++;
            if(map[nums[i]]==2)   
            return true;     
        }       
         return false;
    }
};