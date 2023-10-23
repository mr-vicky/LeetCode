class Solution {
public:
    bool isPowerOfFour(int n) {
        long long int res = 0;
        for(int i = 0; i < n; i++){
            res = pow(4, i);
            if(res == n){
                return true;
            }
            else if(res > n){
                break;
            }
        }
        return false;
    }
};