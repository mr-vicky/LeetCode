// TC: O(n) 
// SC: O(n)
// where, n = no. of digits in x
class Solution {
public:
    bool isPalindrome(int x) {
        vector<int>v1;
        vector<int>v2;
        if(x<0) 
            return false;
        
        while(x>0)
        {
            int temp = x%10;
            v1.push_back(temp);
            x/=10;
        }
        
        for(auto x: v1)
            v2.push_back(x);
        
        reverse(v2.begin(), v2.end());
        
        if(v1==v2)  
            return true;
        return false;
    }
};