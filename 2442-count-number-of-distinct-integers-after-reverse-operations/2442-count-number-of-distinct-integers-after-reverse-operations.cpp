class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        set<int>st(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            int temp=0;
            int n=nums[i];
            while(n>0){
                temp=(temp*10)+n%10;
                n/=10;
            }
            st.insert(temp);
        }
        return st.size();
    }
};