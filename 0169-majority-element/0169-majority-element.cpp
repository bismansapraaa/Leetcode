class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> map1{0};
        int n = nums.size();
        for(int i=0;i<nums.size();i++)
        {
            map1[nums[i]]++;
        }
        for(int i =0;i<n;i++)
        {
             if(map1[nums[i]] >n/2)
            {
                return nums[i];
            }
        }
        return 0 ;
    }
};