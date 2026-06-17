class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int longest = 1;
        if(n==0)
        {
            return 0;
        }
        unordered_set <int> st;
        for(int i=0;i<n;i++)
        {
            st.insert(nums[i]);
        }
        for(int x : st)
        {
            if(st.find(x-1) == st.end())
            {
            int cnt = 1;
            int current = x;
            while(st.find(current+1)!= st.end())
            {
                current++;
                cnt ++;
            }
            longest = max(longest,cnt);
            }
        } 
    return longest;        
    }
};