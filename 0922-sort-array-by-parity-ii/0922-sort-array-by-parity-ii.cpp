// TC: O(n)
// SC: O(n)
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>res;
        vector<int>even;
        vector<int>odd;
        int j=0, k=0;
        int n = nums.size();

        for(int i=0; i<n; i++)
        {
            if(nums[i]%2==0)
                even.push_back(nums[i]);
            else 
                odd.push_back(nums[i]);
        }

        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                res.push_back(even[j]);
                j++;
            }
            else 
            {
                res.push_back(odd[k]);
                k++;
            }    
        }
        return res;
    }
};