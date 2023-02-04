// TC: O(n*k)
// SC: O(n*k), where k = no. of digits in the integer
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>res;

        for(auto x: nums)
        {
            vector<int>temp; 
            while(x>0)
            {
                temp.push_back(x%10);
                x/=10;
            }

            reverse(temp.begin(), temp.end());
            for(auto x: temp)
                res.push_back(x);
        }
        return res;
    }
};