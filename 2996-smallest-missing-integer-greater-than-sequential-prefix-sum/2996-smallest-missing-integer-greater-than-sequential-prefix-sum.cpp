class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int ans = nums[0];
        for(int i =1;i<nums.size();i++)
        {
            if(nums[i] == nums[i- 1] + 1)
            {
                ans = ans + nums[i];
            }
            else
            {
                break;
            }
        }
    while (true) 
    {
        bool found = false;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] == ans) 
            {
                found = true;
                break;
            }
        }
        if (!found) 
        {
            return ans;
        }
        ans++;
    }
 }
};