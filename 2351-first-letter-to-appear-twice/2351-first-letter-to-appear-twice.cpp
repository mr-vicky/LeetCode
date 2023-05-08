class Solution {
public:
    char repeatedCharacter(string s) {
        int min_idx = INT_MAX;
        for(int i=0; i<s.length(); i++)
            for(int j=i+1; j<s.length(); j++)
                if(s[i]==s[j])
                    min_idx =min(min_idx, j);
        return s[min_idx];
    }
};


