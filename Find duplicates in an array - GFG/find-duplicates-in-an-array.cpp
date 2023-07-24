//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int>v;
        set<int>s;
        unordered_map<int, int>mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        
        for(auto x: mp){
            if(x.second>1){
                v.push_back(x.first);
            }
        }
        
        if(v.size()==0){
            v.push_back(-1);
        }
        for(auto x: v){
            s.insert(x);
        }
        v.clear();
        for(auto x: s){
            v.push_back(x);
        }
        // sort(v.begin(), v.end());
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends