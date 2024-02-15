class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < n-1; i++){
            sum += nums[i];
        }   
        cout << sum << endl;

        for(int i = n-1; i >= 0; i--){
            if(i == 1){
                return -1;
            }
            if(sum > nums[i]){
                return sum + nums[i];
            }
            else{
                sum -= nums[i-1];
            }
        }
        return sum;
    }
};