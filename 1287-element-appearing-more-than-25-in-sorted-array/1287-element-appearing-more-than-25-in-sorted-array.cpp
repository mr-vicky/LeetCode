class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int freq = 25*n/100;

        for(auto x: arr)
            if(count(arr.begin(), arr.end(), x)>freq)
                return x;
        return -1;
    }
};