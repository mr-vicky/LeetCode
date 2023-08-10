class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        for(int i=0; i<n1; i++){    
            for(int j=0; j<n2; j++){
                if(nums1[i]==nums2[j]){
                    return nums1[i];
                }
            }
        }
        
        int small=min(nums1[0], nums2[0]);
        int large=max(nums1[0], nums2[0]);
        int res=(small*10)+large;
        return res;
    }
};