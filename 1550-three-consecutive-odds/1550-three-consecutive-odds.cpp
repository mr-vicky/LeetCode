// TC: O(n)
// SC: O(1)
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n = arr.size();
        for(int i=1; i<n-1; i++)
            if(arr[i]%2!=0 && arr[i-1]%2!=0 && arr[i+1]%2!=0)
                return true;
        return false;
    }
};