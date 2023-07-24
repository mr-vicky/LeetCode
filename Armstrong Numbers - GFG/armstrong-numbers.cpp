//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int temp=n;
        int res=0;
        vector<int>v;
        
        while(temp>0){
            v.push_back(temp%10);
            temp/=10;
        }
        for(int i=0; i<v.size(); i++){
            res+=(v[i]*v[i]*v[i]);
        }
        
        if(n==res){
            return "Yes";
        }
        else{
            return "No";
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends