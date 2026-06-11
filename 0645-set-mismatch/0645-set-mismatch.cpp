class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> v1(2);
        unordered_map <int,int> map1{0};
        int x;
        for(int i=0;i<nums.size();i++)
        {
            map1[nums[i]]++;
            if(map1[nums[i]] ==2)
            {
                v1[0] = nums[i];
                 x = nums[i];
                 
            }
        }
        for(int i = 1; i <= nums.size(); i++)

{

    if(map1[i] == 2)

        v1[0] = i;

    if(map1[i] == 0)

        v1[1] = i;

}
        return v1;

    }
};