class Solution {
public:
    bool checkZeroOnes(string s) {
        int maxx = 0;
        int count =0;
        int maxx0 =0;
        int count0 =0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '1' )
            {
                count ++;
                if(i == s.size()-1 || s[i+1] != s[i])
                {
                    maxx = max(count,maxx);
                    count =0;
                }
            }
               else if(s[i] == '0' )
            {
                count0 ++;
                if(i == s.size()-1 || s[i+1] != s[i])
                {
                    maxx0 = max(count0,maxx0);
                    count0 =0;
                }
            }
        }
            if(maxx>maxx0)
            {
                return true;
            }
        
        return false;
    }
};