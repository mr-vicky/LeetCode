class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        set<int>temp;

        if(n1 < n2){
            for(int i = 0; i < n1; i++){
                for(int j = 0; j < n2; j++){
                    if(nums1[i] == nums2[j]){
                        temp.insert(nums1[i]);
                    }
                }
            }
        }
        else{
            for(int i = 0; i < n2; i++){
                for(int j = 0; j < n1; j++){
                    if(nums2[i] == nums1[j]){
                        temp.insert(nums2[i]);
                    }
                }
            }
        }
        vector<int>res(temp.begin(), temp.end());
        return res;
    }
};