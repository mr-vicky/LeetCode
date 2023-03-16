class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int no_R = 0;
        int no_L = 0;
        
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='R')
                no_R++;
            
            if(s[i]=='L' )
                no_L++;
            
            if(no_R==no_L)
                count++;
        }
        return count;
    }
};