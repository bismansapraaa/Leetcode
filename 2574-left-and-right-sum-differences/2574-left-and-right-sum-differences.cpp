class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector <int> right;
        vector<int> left;
        vector<int> answer;
        int rightSum =0;
        int leftSum = 0;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            right.push_back(rightSum);
            rightSum += nums[i];
        }
        reverse(right.begin(), right.end());
        for (int j = 0; j < nums.size(); j++) 
        {
            left.push_back(leftSum);
            leftSum += nums[j];
        }
        for (int k = 0; k < nums.size(); k++) 
        {
            answer.push_back(abs(left[k] - right[k]));
        }
        return answer;

    }
};