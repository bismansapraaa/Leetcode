class Solution {
public:
    bool wordPattern(string pattern, string s) {
         vector<string> ans;
          string temp = "";
        for(int i =0;i<s.size();i++)
        {
            if(s[i] !=' ')
            {
              temp += s[i];
            }
            else
            {
                 ans.push_back(temp);

                temp = "";
            }
        }
        ans.push_back(temp);
        if(pattern.size()!=ans.size())
        {
            return false;
        }
        unordered_map<char,string> map1;
        unordered_map<string,char> map2;
        for(int i = 0; i<pattern.size();i++)
        {
            if(map1.find(pattern[i]) == map1.end() && map2.find(ans[i])== map2.end())
            {
              map1[pattern[i]]  = ans[i] ;
              map2[ans[i]] = pattern[i] ;
            }       
            else
            {
                if(map1[pattern[i]]!= ans[i] || map2[ans[i]]!=pattern[i])
                {
                    return false;
                }
           
            }
            }
                return true;
    }
};