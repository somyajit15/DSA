class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = prices[0];
        int max_profit = 0;
        for(int i=1;i<prices.size();i++){
            int profit = prices[i]-min_price;//sell today
            
            max_profit = max(max_profit,profit);//max profit update

            min_price = min(prices[i], min_price); // will todays price become minimum for future
        }

     return max_profit;   
    }
};