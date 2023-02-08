class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(), arr.end(), greater<int>());
        for(auto x: arr)
            if(count(arr.begin(), arr.end(), x)==x)
                return x;
        return -1;
    }
};