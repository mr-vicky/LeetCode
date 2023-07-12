class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> v(1000001);
        for(int i=0;i<arr.size();i++){
            v[arr[i]-1]=1;
        }
        // for(int i=0;i<1000;i++) cout<<v[i]<<" ";
        int j=0,idx=0;
        while(j!=k){
            if(v[idx]==0) j++;
            idx++;
        }
        return idx;
    }
};