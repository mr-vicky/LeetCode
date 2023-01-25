// TC: O(n)
// SC: O(n)
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int index_pos=0, index_neg=1;
        for(auto x: nums)
        {
            if(x>0)
            {
                ans[index_pos]=x;
                index_pos+=2;
            }
            else
            {
                ans[index_neg]=x;
                index_neg+=2;
            }
        }
        return ans;
    }
};