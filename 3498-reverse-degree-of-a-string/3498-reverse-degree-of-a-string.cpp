class Solution {
public:
    int reverseDegree(string s) {
        int count = 0;
        for(int i=0;i<s.size();i++)
        {
            int ans = (i+1)*('z'-s[i]+1);
            count = count + ans;
        }
        return count;
    }
};