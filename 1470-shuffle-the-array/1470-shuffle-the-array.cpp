// TC: O(n)
// SC: O(n)
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        vector<int>left;
        vector<int>right;
        int temp=0;
        int size=2*n;
        for(int i=0; i<n; i++)
        {
           temp=nums[i];
           left.push_back(temp);
        }

        for(int i=n; i<size; i++)
        {
            temp=nums[i];
            right.push_back(temp);
        }
        int j=0, k=0;
        for(int i=0; i<size; i++)
        {
            if(i%2==0)
            {
                temp=left[j];
                ans.push_back(temp);
                j++;
            }
            if(i%2!=0)
            {
                temp=right[k];
                ans.push_back(temp);
                k++;
            }
        }
        return ans;
    }
};