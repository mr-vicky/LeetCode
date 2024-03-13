// TC : O(n)
// SC : O(1)
class Solution {
public:
    int pivotInteger(int n) {
        int pref_sum = 0;
        int suf_sum = 0;

        for(int i = 1; i <= n; i++){
            suf_sum += i;
        }
        pref_sum = 1;

        int i = 1;
        while(i <= n){
            if(pref_sum == suf_sum){
                return i;
            }
            i++;
            pref_sum += i;
            suf_sum -= i-1;
        }
        return -1;
    }
};