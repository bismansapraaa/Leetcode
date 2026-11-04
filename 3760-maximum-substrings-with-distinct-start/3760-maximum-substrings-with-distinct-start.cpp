class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char, int> mp;
        int count =0;
        for(int i =0;i<s.size();i++)
        {
            mp[s[i]]++;
            if(mp[s[i]] == 1)
            {
                count++;
            }
        }
        return count;
    }
};