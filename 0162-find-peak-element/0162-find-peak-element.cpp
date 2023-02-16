// TC: O(log(n))
// SC: O(1)
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = size(nums);
        int low = 0, high = n-1;
        
        while(low<=high)
        {
            int mid = (low+high)/2;
            
            if((mid==0 || nums[mid-1]<=nums[mid]) && 
               (mid==n-1 || nums[mid+1]<=nums[mid]))
                return mid;
            
            if(mid>0 && nums[mid-1]>=nums[mid])
                high = mid-1;
            else 
                low = mid+1;
        }
        return -1;
    }
};