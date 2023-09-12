// Method 2: 
// TC: O(n)
// SC: O(1)

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int i = 0;
        int j = s.length()-1;
        
        while( i < j ){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};