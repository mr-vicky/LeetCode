class Solution {
public:
    string categorizeBox(long int length, long int width, long int height, int mass) {
        long long vol = length*width*height;
        bool is_bulkey = false;
        bool is_heavy = false;
        
        if(length>=10000 || width>=10000 || 
           height>=10000 || vol>=1000000000)
            is_bulkey = true;
        if(mass>=100)
            is_heavy = true;

        if(is_bulkey && is_heavy)
            return "Both";
        if(!is_heavy && !is_bulkey)
            return "Neither";
        if(is_bulkey && !is_heavy)
            return "Bulky";
        return "Heavy";  
    }
};