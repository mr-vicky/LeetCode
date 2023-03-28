class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;
        map<int, int>mp;
        for(int i=0; i<n; i++)
           mp[nums[i]]++; 

        for(auto x: mp) 
            v.push_back(x.first);

        reverse(v.begin(), v.end());

        int size = v.size();
        if(size==1)
            return v[0];
        else if(size==2)
            return v[0];
        else if(size>=3)
            return v[2];
        return -1;
    }
};