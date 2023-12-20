class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n = prices.size();
        sort(prices.begin(), prices.end());
        int money_left = money - (prices[0] + prices[1]);
        return (money_left >= 0)? money_left : money;  
    }
};