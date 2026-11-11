class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
    long long ans1 = 1LL * need1 * cost1 + 1LL * need2 * cost2;
    long long common = min(need1, need2);
    long long remaining1 = need1 - common;
    long long remaining2 = need2 - common;
    long long ans2 = common * costBoth + remaining1 * cost1 + remaining2 * cost2;
    long long commonMax = max(need1, need2);
    long long ans3 = commonMax * costBoth;
    return min({ans1, ans2, ans3});
    }
};