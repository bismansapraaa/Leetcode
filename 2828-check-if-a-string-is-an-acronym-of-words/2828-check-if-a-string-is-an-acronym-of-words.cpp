class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string x;
        for(int i=0;i<words.size();i++)
        {
            string a= words[i];
            
             x +=a[0];
        }
        return (x==s);
        
    }
};