// TC: O(n)
// SC: O(n)
class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>nums;
        int res=0;
        
        for(int i=0; i<n; i++)
        {
            int temp= start + 2*i;
            nums.push_back(temp);
            temp=0;
        }

        for(auto x: nums)
            res=res^x;

        return res;
    }
};