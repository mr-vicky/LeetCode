class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<double>aver;
        sort(nums.begin(), nums.end());
        int i=0, j=nums.size()-1;
        while(i<j)
        {
            double small = nums[i];
            double big = nums[j];
            aver.insert((small + big )/2);
            i++;
            j--;
        }
        return aver.size();
    }
};