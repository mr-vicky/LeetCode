class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.length();

        int count_ones = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1')
                count_ones++;
        }

        string res = "";
        if(count_ones == 1){
            for(int i = 0; i < n-1; i++){
                res += '0';
            }
            res += '1';
        }
        else if(count_ones == n){
            for(int i = 0; i < n; i++){
                res += '1';
            }
        }
        else {
            for(int i = 0; i <count_ones - 1; i++){
                res += '1';
            }

            for(int i = 0; i < n - count_ones; i++){
                res += '0';
            }
            res += '1';
        }

        return res;
    }
};