class Solution {
public:
    bool squareIsWhite(string coordinates) {
        map<char, int>mp;
        mp['a']=1;
        mp['b']=2;
        mp['c']=3;
        mp['d']=4;
        mp['e']=5;
        mp['f']=6;
        mp['g']=7;
        mp['h']=8;

        if(mp[coordinates[0]]%2==0 && (coordinates[1])%2==0)
            return false;
        if(mp[coordinates[0]]%2==0 && (coordinates[1])%2!=0)
            return true;
        if(mp[coordinates[0]]%2!=0 && (coordinates[1])%2!=0)
            return false;
        if(mp[coordinates[0]]%2!=0 && (coordinates[1])%2==0)
            return true;
        
        return false;
    }
};