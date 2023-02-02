class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<vector<int>>ans;
        set<int>s1;
        set<int>s2;
        int k=0;

        for(int i=0; i<n; i++)
        {
            int flag = 0;
            for(int j=0; j<m; j++)
            {
                if(nums1[i]==nums2[j])
                    flag=1;
            }

            if(flag==0)
                s1.insert(nums1[i]);
        }

        vector<int>v1(s1.begin(), s1.end());
        ans.push_back(v1);

        for(int i=0; i<m; i++)
        {
            int flag = 0;
            for(int j=0; j<n; j++)
            {
                if(nums2[i]==nums1[j])
                    flag=1;
            }

            if(flag==0)
                s2.insert(nums2[i]);
        }

        vector<int>v2(s2.begin(), s2.end());
        ans.push_back(v2);

        return ans;
    }
};