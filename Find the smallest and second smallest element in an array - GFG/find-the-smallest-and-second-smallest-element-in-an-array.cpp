//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
    int s1=INT_MAX, s2=INT_MAX;
    set<int>s(a, a+n);
    if(s.size()<=1){
        return {-1};
    }
    
    
    for(int i=0; i<n; i++){
        s1=min(s1, a[i]);
    }
    
    for(int i=0; i<n; i++){
        if(a[i]!=s1){
            s2=min(s2, a[i]);
        }
    }
    
    return {s1, s2};
}