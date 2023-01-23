// TC: O(n)
// SC: O(1)
class Solution {
public:
    bool isPalindrome(string& s){
        string a=s;
        reverse(s.begin(), s.end());

        return a==s;
    }

    string firstPalindrome(vector<string>& words) {

       for(int i=0; i<words.size(); i++)
       {
           if(isPalindrome(words[i]))
            return words[i];
       } 
       return "";
    }
};