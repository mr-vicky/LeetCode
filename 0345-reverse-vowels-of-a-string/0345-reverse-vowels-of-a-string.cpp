class Solution {
public:
    string reverseVowels(string s) {
        vector<int>vowels;
        int j=0;

        for(int i=0; i<s.length(); i++)
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || 
                s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
                vowels.push_back(s[i]);

        reverse(vowels.begin(), vowels.end());
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || 
                s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
             {
                s[i]=vowels[j];
                j++;
             }   
        }
        return s;
    }
};