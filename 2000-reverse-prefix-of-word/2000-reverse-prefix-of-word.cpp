class Solution {
public:
    string reversePrefix(string word, char ch) {
        vector<char>v1;
        int last_idx = 0;
        for(int i=0; i<size(word); i++)
        {
            v1.push_back(word[i]);
            if(v1[i] == ch)
            {
                last_idx = i;
                break;
            }
            if(size(word)==size(v1))
                return word;
        }
        reverse(v1.begin(), v1.end());
        for(int i=last_idx+1; i<size(word); i++)
            v1.push_back(word[i]);

        string s(v1.begin(), v1.end());
        return s;
    }
};