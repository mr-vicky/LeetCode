//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int factorial(int n){
        int fact=1;
        while(n>0){
            fact*=n;
            n--;
        }
        return fact;
    }  

    int isPerfect(int N) {
        // code here
        int res=0;
        vector<int>v;
        int temp=N;
        while(temp>0){
            v.push_back(temp%10);
            temp/=10;
        }
        for(int i=0; i<v.size(); i++){
            res+=factorial(v[i]);
        }
        return res==N;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isPerfect(N) << "\n";
    }
}

// } Driver Code Ends