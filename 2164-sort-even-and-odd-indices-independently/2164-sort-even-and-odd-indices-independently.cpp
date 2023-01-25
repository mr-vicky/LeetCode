// TC: O(n*log(n))
// SC: O(n)
class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>ans;
        vector<int>odd_index;
        vector<int>even_index;
        int n = nums.size();
        int j=0, k=0;

        for(int i=0; i<n; i++)
        {
            if(i%2==0)
                even_index.push_back(nums[i]);
            else 
                odd_index.push_back(nums[i]);
        }

        sort(even_index.begin(), even_index.end());
        sort(odd_index.begin(), odd_index.end(), greater<int>());

        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                ans.push_back(even_index[j]);
                j++;
            }
            else 
            {
                ans.push_back(odd_index[k]);
                k++;
            }    
        }
        return ans;

    }
};