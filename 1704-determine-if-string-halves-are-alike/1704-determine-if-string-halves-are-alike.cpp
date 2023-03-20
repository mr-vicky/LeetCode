class Solution {
public:
    bool halvesAreAlike(string s) {
        vector<char>v{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int n = s.length();
        int s1_count = 0;
        int s2_count = 0;
        string s1(s.begin(), s.begin()+n/2);
        string s2(s.begin()+n/2, s.end());
        
        for(int i=0; i<s1.length(); i++)
            for(int j=0; j<v.size(); j++)
                if(s1[i]==v[j])
                    s1_count++;

        for(int i=0; i<s2.length(); i++)
            for(int j=0; j<v.size(); j++)
                if(s2[i]==v[j])
                    s2_count++;

        return s1_count==s2_count;
    }
};