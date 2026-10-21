class Solution {
public:
    vector<int> minOperations(string boxes) {
        int count = 0;
        vector<int> ans;
        for(int i =0;i<boxes.size();i++)
        {
            for(int j=0;j<boxes.size();j++)
            {
                if(boxes[j] == '1')
                {
                    count = count + abs(i - j);
                }
            }
            ans.push_back(count);
            count = 0;
        }
        return ans;
    }
};