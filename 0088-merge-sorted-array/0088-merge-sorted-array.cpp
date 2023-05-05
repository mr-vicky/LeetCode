class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
        nums1.resize(m);
        int j = 0;
        for(int i=m; i<m+n; i++)
        {
            if(nums1[i]==0)
            {
                nums1.push_back(nums2[j]);
                j++;
            }
        }
        sort(nums1.begin(), nums1.end());
    }
};