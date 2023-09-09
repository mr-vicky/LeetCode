// TC: O(n)
// SC: O(1)
class Solution {
public:
    int countEven(int num) {
        int count = 0;
        int sum = 0;

        if(num<10){
            for(int i=1; i<=num; i++)
                if(i%2==0)
                    count++;
            return count;
        }
        else {
            for(int i=1; i<=num; i++){
                int a = i;
                int sum = 0;
                while(a>0){
                    sum = sum + a%10;
                    a /= 10;
                }
                if(sum%2==0)
                    count++;
            }
            return count;
        }
        return -1;
    }
};
