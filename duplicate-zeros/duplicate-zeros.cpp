
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        vector<int>v;

        for(int i=0; i<arr.size();i++)
        {
            if(v.size()==n) break;
            else if(arr[i]==0)
            {
                v.push_back(0);
                v.push_back(0);
            }
            else 
                v.push_back(arr[i]);
        }

        for(int i=0; i<n; i++)
            arr[i]=v[i];
    }
};