class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n = s.length();
        int count = 0;
        double res = 0;

        for(int i=0; i<n; i++)
            if(letter == s[i])
                count++;

        res = (double)count/(double)n*100;
        return (int)res;
    }
};

