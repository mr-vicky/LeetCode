class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>v;
        vector<char>temp;

        for(int i=0; i<s.length(); i++)
        {
            if(isupper(s[i]))
                s[i]=tolower(s[i]);
            if(isalnum(s[i]))
                v.push_back(s[i]);
        }

        temp = v;
        reverse(v.begin(), v.end());
        return temp==v;
    }
};