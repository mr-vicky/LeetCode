class Solution {
public:
    int totalMoney(int n) {
        int total_money = 0;
        int count_days = 0;
        
        for(int i = 1; i <= n; i++){
            for(int j = i; j < i+7 ; j++){
                total_money += j;
                count_days++;
                if(count_days == n) return total_money;
            }
        }
        return total_money;
    }
};