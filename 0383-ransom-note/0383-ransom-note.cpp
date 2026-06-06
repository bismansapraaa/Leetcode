class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
         unordered_map<char,int> map1{0};
        unordered_map<char,int> map2{0};
        for(int i =0; i<magazine.size();i++)
        {
            map1[magazine[i]]++;
        }
        for(int i =0; i<ransomNote.size();i++)
        {
            map2[ransomNote[i]]++;
        }
        for(int i=0;i<ransomNote.size();i++)
        {
            
            if(map1[ransomNote[i]]<map2[ransomNote[i]]) 
            {
                return false;
            }
            
        }
        return true;
    }

};