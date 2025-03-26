//You are given an array prices where prices[i] is the price of a given stock on the ith day.
//You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

class Solution {
public:
    int maxProfit(vector<int>& prices) {                //Kadane's algo O(n)
        int buy=prices[0];
        int profit=0;
        int n=prices.size();
        for(int i=1;i<n;i++)
        {
            if(prices[i]<=buy)
            {
                buy=prices[i];
            }
            else if (prices[i] - buy > profit)
            {
                profit = prices[i] - buy;
            }
        }
        return profit;
    }
};