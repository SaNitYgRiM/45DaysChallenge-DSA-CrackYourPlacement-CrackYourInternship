class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0, min = INT_MAX;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < min) min = prices[i];
            else if (prices[i] > min) maxi = max(prices[i] - min, maxi);
        }
        return maxi;
    }
};