class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_map<int, int>ump;
        int n=nums.size();
        int i=0; 
        int j=i+1;
        
        while(j<n){
            int sum = nums[i++] + nums[j++];
            ump[sum]++;
        }

        for(auto x: ump){
            if(x.second>=2){
                return true;
            }
        }
        return false;
    }
};