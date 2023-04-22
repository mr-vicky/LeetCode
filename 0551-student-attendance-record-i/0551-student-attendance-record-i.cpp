class Solution {
public:
    bool checkRecord(string s) {
        int absent_count = 0;
        int late_count = 0;

        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='A')
                absent_count++;
            
            if(s[i]=='L' && s[i+1]=='L' && s[i+2]=='L')
                late_count++;
        }

        if(absent_count>=2 || late_count>=1)
            return false;        
       return true;
    }
};