class Solution {
public:
    int minPartitions(string n) {
        int maxx = *max_element(n.begin(),n.end());
        return maxx - '0';
    }
};