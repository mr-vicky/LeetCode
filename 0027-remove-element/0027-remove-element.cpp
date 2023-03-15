class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>v;

        for(auto x: nums)
            if(x!=val)
                v.push_back(x);
        nums=v;
        return v.size();
    }
};