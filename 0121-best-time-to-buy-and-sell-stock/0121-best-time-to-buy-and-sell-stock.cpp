class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest_price = INT_MAX;
        int profit = 0;
        int max_profit = 0;

        for(int i = 0; i < prices.size(); i++){
            if(lowest_price > prices[i]){
                lowest_price = prices[i];
            }

            profit = prices[i] - lowest_price;
            max_profit = max(max_profit, profit);
        }
        return max_profit;
    }
};