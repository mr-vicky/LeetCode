//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        vector<int>v;
        
        for(int i=0; i<n; i++)
            if(a[i]==0)
                v.push_back(a[i]);
                
        for(int i=0; i<n; i++)
            if(a[i]==1)
                v.push_back(a[i]);
                
        for(int i=0; i<n; i++)
            if(a[i]==2)
                v.push_back(a[i]);
                
        for(int i=0; i<v.size(); i++)
            a[i]=v[i];
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends