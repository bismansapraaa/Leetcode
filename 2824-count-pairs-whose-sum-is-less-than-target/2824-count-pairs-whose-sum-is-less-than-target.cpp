class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int pair = 0;
        int n = nums.size() -1;
        for(int i =0;i<nums.size();i++)
        {
            for(int j = i+1;j<nums.size();j++)
            {
                if(0 <= i < j < n && nums[i] + nums[j] < target)
                {
                    pair++;
                }
            }
        }
        return pair;
    }
};