class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int minn = *min_element(nums.begin(),nums.end());
        int maxx = *max_element(nums.begin(),nums.end());
        vector<int> ans;
        for(int i = minn ; i<=maxx ; i++)
        {
            if (!st.contains(i))
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};