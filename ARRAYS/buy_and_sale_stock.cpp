//https://leetcode.com/problems/best-time-to-buy-and-sell-stock?envType=problem-list-v2&envId=array
//leetcode



class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
         int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            minPrice = min(minPrice, prices[i]);     // best buy
            int profit = prices[i] - minPrice;       // sell today
            maxProfit = max(maxProfit, profit);      // best profit
        }
        return maxProfit;
    }
};