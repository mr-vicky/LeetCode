// TC: O(n)
class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
        int pass1 = 0;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0 && s[i] != '1')
                pass1++;
            else if(i % 2 != 0 && s[i] != '0')
                pass1++;
        }

        int pass2 = 0;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0 && s[i] != '0')
                pass2++;
            else if(i % 2 != 0 && s[i] != '1')
                pass2++;
        }
        return min(pass1, pass2);
    }
};