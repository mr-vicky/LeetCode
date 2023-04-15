class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max = *max_element(arr.begin(), arr.end());
        for(int i=0; i<arr.size(); i++)
            if(max==arr[i])
                return i;
        return 0;
    }
};