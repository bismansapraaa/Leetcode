class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int maxx = max(nums.back(), k);
        for (int i = k; i <= maxx + k; i += k)
        {
            if (!binary_search(nums.begin(), nums.end(), i))
            {
                return i;
            }
        }
        return -1;
    }
};