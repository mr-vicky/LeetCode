class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max_profit = 0;
        int curr_profit = 0;
        if(n == 1) return 0;

        for(int i = n-1; i > 0; i--){
            int curr_profit = prices[i] - prices[i-1];
            if(curr_profit > 0){
                max_profit += curr_profit;
            }
        }
        return max_profit;
    }
};