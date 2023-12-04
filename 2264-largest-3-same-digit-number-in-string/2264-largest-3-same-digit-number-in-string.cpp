#include<typeinfo>
class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.length();
        int curr = 0;
        int max_good = 0;
        string good_string = "";
        bool flag = false;
        for(int i = 0; i < n-1; i++){
            curr = 0;
            if(num[i] == num[i+1] && num[i+1] == num[i+2]){
                char temp = num[i];
                curr = (curr * 10) + temp - '0';
                curr = (curr * 10) + temp - '0';
                curr = (curr * 10) + temp - '0';
                max_good = max(max_good, curr);
                flag = true;
            }
        }

        if(flag == true){
            good_string = to_string(max_good);
            if(max_good == 0) good_string = "000";
        }
        return good_string;
    }
};