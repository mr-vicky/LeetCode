// TC: O(n)
// SC: O(1)
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int max_idx = 0;
        int n = arr.size();

        for(int i=0; i<n; i++)
            if(arr[max_idx]<arr[i])
                max_idx = i;
                
        if(max_idx == n-1) return false;
        if(max_idx == 0) return false;
        if(n==1 || n==2) return false;
        for(int i=0; i<n-1; i++)
        {
            if(arr[i]==arr[i+1])
                return false;

            if(arr[i]>arr[i+1] && i<max_idx )
                return false;

            if(arr[i]<arr[i+1] && i>max_idx)
                return false;
        }
        return true;
    }
};