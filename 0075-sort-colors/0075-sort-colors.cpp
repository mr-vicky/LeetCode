class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>v;

        for(auto x: nums)
            if(x==0)
                v.push_back(x);

        for(auto x: nums)
            if(x==1)
                v.push_back(x);

        for(auto x: nums)
            if(x==2)
                v.push_back(x);
        nums=v;        
    }
};