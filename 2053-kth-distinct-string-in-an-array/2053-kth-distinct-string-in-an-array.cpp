// TC: O(n)
// SC: O(1)
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        for(auto str : arr)
        {
            if(count(arr.begin(), arr.end(), str)==1)
                k--;
            if(k==0)
                return str;
        }
        return "";
    }
};