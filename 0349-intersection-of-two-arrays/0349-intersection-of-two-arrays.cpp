class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> sol;
        unordered_map <int,int> map1;
        for(int i=0;i<nums1.size();i++)
        {
        
            map1[nums1[i]] =1;
        }
        for(int j =0;j<nums2.size();j++)
        {
            if(map1[nums2[j]] == 1)
            {
                sol.push_back(nums2[j]);
                map1[nums2[j]] =0; 
            }
        }
        return sol;

        
    }
};