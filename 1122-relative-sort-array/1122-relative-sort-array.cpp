// TC: O(n*n)
// SC: O(n)
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>ans;
        vector<int>temp;
        int n = arr1.size();
        int m = arr2.size();

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
                if(arr2[i]==arr1[j])
                    ans.push_back(arr1[j]);
        }

        for(int i=0; i<n; i++)
            if(count(ans.begin(), ans.end(), arr1[i])==0)
                temp.push_back(arr1[i]);

        sort(temp.begin(), temp.end());

        for(int i=0; i<temp.size(); i++)
            ans.push_back(temp[i]);

        return ans;
    }
};