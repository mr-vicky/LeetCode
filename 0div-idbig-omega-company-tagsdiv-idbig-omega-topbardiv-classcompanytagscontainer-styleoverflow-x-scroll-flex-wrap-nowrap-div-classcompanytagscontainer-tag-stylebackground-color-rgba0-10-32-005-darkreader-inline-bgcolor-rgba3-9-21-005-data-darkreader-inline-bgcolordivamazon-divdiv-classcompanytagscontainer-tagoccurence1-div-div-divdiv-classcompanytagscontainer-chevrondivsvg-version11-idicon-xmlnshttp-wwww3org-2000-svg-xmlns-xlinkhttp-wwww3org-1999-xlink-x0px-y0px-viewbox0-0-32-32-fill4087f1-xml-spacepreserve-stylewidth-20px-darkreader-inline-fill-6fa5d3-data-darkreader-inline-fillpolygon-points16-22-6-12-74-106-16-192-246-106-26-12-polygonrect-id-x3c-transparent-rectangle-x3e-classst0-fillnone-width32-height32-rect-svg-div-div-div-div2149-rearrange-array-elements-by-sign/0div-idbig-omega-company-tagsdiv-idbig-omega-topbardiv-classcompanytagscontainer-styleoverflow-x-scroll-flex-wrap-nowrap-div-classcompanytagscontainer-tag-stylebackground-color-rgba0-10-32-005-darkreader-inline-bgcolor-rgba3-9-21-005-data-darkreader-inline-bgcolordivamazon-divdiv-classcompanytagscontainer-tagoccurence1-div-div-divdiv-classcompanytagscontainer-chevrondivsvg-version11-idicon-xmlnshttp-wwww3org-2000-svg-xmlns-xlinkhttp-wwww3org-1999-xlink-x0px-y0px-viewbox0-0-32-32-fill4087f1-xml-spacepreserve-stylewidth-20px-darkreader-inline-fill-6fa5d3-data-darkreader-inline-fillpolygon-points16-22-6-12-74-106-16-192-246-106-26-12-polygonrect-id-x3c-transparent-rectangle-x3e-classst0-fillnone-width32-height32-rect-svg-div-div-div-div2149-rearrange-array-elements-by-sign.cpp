// Method 2 : 
// TC : O(n)
// SC : O(n)
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>pos;
        vector<int>neg;
        
        for(auto x: nums){
            if( x > 0) pos.push_back(x);
            else neg.push_back(x);
        }
        
        nums.clear();
        for(int i = 0; i < n/2; i++){
            nums.push_back(pos[i]);
            nums.push_back(neg[i]);
        }
        return nums;
    }
};