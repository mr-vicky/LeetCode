class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int>mp;
        int n = nums.size();
        int min_element = INT_MAX;
        int key_value = 0;

        for(int i=0; i<n; i++)
            if(nums[i]%2==0)
                mp[nums[i]]++;
        
        if(mp.size()==0) return -1;
        for(auto x: mp)
        {
            if(key_value < x.second)
            {
                key_value = x.second;
                min_element = x.first;
            }
        }
        return min_element;
    }
};