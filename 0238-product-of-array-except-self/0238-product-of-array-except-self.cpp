class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>res;
        int product = 1;
        int count_zero = 0;

        for(int i = 0; i < n; i++){
            if(nums[i] == 0)
                count_zero++;
        }

        if(count_zero == 1){
            for(int i = 0; i < n; i++){
                if(nums[i] != 0){
                    product *= nums[i];
                }
            }
        }
        else{
            for(int i = 0; i < n; i++){
                product *= nums[i];
                if(nums[i] == 0)
                    count_zero++;
                }
        }

        if(count_zero == 1){
            for(int i = 0; i < n; i++){
                if(nums[i] == 0){
                    res.push_back(product);
                }
                else{
                    res.push_back(0);
                }
            }
        } 
        else
        {
            for(int i = 0; i < n; i++){
                res.push_back(product);
            }
            for(int i = 0; i < n; i++){
                if(nums[i] != 0)
                    res[i] = res[i] / nums[i];
            }
        }
        return res; 
    }
};