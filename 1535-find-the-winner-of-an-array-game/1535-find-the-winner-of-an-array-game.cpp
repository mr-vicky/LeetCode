class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n = arr.size();
        int winner = 0;
        int x = 0;
        int y = x + 1;
        int count = 0;

        int maxi = 0;
        for(int i = 0; i < n; i++){
           maxi = max(maxi, arr[i]);
        }
        if(k >= n+1) return maxi;

        while(y < n){
            if(arr[x] > arr[y]){
                winner = arr[x];
                swap(arr[x], arr[y]);
                count += 1;
            }
            else if(arr[x] < arr[y]){
                count = 1;
                winner = arr[y];
            }
            cout << winner << " " << count << endl;
            if(count == k)
                return winner;
            x++;
            y++;
       }
       return maxi;
    }
};