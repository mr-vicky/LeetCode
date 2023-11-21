class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int res = 0;

        int curr = nums[0];
        int temp = curr - 1;
        int cnt = 1;
        for(int i = 1; i < n; i++){

            if(curr == temp){
                break;
            }

            if(curr == nums[i]){
                cnt++;
                if(cnt > 2){
                    nums.erase(nums.begin()+i);
                    res++;
                    i--;
                    nums.push_back(temp);
                }
            }
            else{
                curr = nums[i];
                cnt = 1;
            }
        }
        return n-res;
    }
};