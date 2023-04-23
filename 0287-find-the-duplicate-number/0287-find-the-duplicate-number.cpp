class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int>mp;
        for(int i=0; i<nums.size(); i++)
            mp[nums[i]]++;

        for(auto x: mp)
            if(x.second>=2)
                return x.first;
        return -1;
    }
};