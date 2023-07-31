class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count=0;
        int sum=0;
        for(int i=0; i<k; i++){
            sum+=arr[i];
        }
        if(sum/k>=threshold){
            count++;
        }

        for(int i=k; i<arr.size(); i++){
            sum=sum+arr[i]-arr[i-k];
            if(sum/k>=threshold){
                count++;
            }
        }
        return count;
    }
};