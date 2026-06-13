class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int,int> map1{0};
        for(int i =0;i<nums.size();i++)
        {
            map1[nums[i]]++;
        }
        for(int j=0;j<nums.size();j++)
        {
            if(map1[nums[j]]==1)
            {
                return nums[j];
            }
        }
        return 0;
    }
};