class Solution {
public:
    bool judgeCircle(string moves) {
        map<char, int>mp;

        for(auto x: moves)
            mp[x]++;

        if(mp['L']!=mp['R'])
            return false;

        if(mp['U']!=mp['D'])
            return false;
            
        return true;
    }
};