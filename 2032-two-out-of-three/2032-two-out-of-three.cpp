class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        set<int>s;
        for(auto x: nums1)
            for(auto y: nums2)
                    if(x == y)
                        s.insert(x);

         for(auto x: nums1)
            for(auto y: nums3)
                    if(x == y)
                        s.insert(x);

         for(auto x: nums2)
            for(auto y: nums3)
                    if(x == y)
                        s.insert(x);
        
        vector<int>ans(s.begin(), s.end());
        return ans;
    }
};