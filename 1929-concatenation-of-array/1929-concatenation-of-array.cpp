// TC: O(n)
// SC: O(1)
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int temp=0;
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            temp=nums[i];
            nums.push_back(temp);
        }
        return nums;
    }
};