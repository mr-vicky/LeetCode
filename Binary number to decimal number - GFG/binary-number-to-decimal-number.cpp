//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int binary_to_decimal(string str) {
        int n = str.length();
        int res=0;
        int i=0;
        int ind=n-1;
        while(ind>=0){
            int temp = str[ind]-'0';
            res+=pow(2, i)*temp;
            i++;
            ind--;
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.binary_to_decimal(str);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends