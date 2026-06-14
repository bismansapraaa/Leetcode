class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        vector <int> anss(2*n);
        for(int i =0;i<n;i++)
        {
            anss[i]= nums[i];
            anss[i+n] = nums[n-i-1];
        }
        return anss;
    }
};