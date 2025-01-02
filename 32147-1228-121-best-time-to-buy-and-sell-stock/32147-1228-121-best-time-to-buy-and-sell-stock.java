// TC: O(N)
// SC: O(1)
class Solution {
    public int maxProfit(int[] prices) {
        int min_price = Integer.MAX_VALUE;
        int max_profit = 0;
        for(int i = 0; i < prices.length; i++){
            min_price = Math.min(min_price, prices[i]);
            max_profit = Math.max(max_profit, prices[i] - min_price);
        }
        return max_profit;
    }
}