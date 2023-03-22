class Solution {
public:
    int subtractProductAndSum(int n) {
        int s=0;
        int m=1;
        int num=0;
        while(n>0)
        {
            num=n;
            num=n%10;
            m=m*num;
            s=s+num;
            n=n/10;
        }
        
        return m-s;
    }
        
};