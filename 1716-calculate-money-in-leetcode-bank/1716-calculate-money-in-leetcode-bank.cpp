class Solution {
public:
    int totalMoney(int n) {
        int count_days = 0;
        int total_money = 0;

        for(int i=0; i<n; i++)
        {
           for(int j=i+1; j<=i+7; j++)
           {
               total_money += j;
               count_days++;

               if(count_days==n)
                    return total_money;
           }
        }
        return -1;
    }
};