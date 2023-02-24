class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char>set(allowed.begin(), allowed.end());
        int count = words.size();
        
        for(int i=0; i<words.size(); i++)
            for(int j=0; j<words[i].length(); j++)
                if(set.find(words[i][j])==set.end())
                {
                    count--;
                    break;
                }
                    
        return count;
    }
};