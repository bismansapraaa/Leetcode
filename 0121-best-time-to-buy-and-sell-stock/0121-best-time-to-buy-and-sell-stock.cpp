class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn = prices[0];
        int maxx = 0;
        for(int i =1;i<prices.size();i++)
        {
            int cost = prices[i] - minn;
            maxx = max(cost,maxx);
            minn = min(prices[i],minn);
        }
            return maxx;
        
    }
};