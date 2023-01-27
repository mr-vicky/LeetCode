class Solution {
public:
    int mySqrt(int x) {
        long long int z=0, i=3, count=0;

        while(x>z)
        {
            z=z+i;
            i=i+2;
            count++;
        }
        
        return count;
    }
};