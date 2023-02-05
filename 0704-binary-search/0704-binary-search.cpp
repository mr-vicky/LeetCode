// TC: O(log(n))
// SC: O(1)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int low = 0;
        int high = nums.size()-1;
        
        while(high>=low)
        {
            int mid = (low+high)/2;
            
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                high = mid-1;
            else 
                low = mid+1;
        }
        return -1;
    }
};