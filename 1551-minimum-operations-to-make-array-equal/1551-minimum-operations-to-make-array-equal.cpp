class Solution {
public:
    int minOperations(int n) {
        int res = 0;

        for(int i=0; i<n/2; i++)
        {
            res = res + (n-((2*i)+1));
        }
        return res;
    }
};