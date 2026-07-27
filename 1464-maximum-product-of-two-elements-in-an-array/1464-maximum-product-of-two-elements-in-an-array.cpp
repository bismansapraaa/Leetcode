class Solution {
public:
    int maxx = 0;
    int maxProduct(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            for(int j = i+1;j<nums.size();j++)
            {
                maxx = max((nums[i]-1)*(nums[j]-1),maxx);
            }
        }
        return maxx;
    }
};