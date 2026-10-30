class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans;
        for (string s : words) 
        {
            int count = 0;
            for (int i = 0; i < s.size(); i++)
            {
                count += weights[(s[i] - 'a')];
            }
            ans += ('a' + (25 - (count % 26)));
        }
        return ans;
    }
};