class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() <= 1) return 0;

        int mini = prices[0];   // minimum so far
        int profit = 0;         // maximum profit so far

        for(int i = 1; i < prices.size(); i++){
            profit = max(profit, prices[i] - mini); // sell today
            mini = min(mini, prices[i]);            // update buy price
        }

        return profit;
    }
};