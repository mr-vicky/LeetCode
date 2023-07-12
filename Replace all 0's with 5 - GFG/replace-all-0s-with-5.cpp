//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

// } Driver Code Ends
class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
        vector<int>v;
        while(n>0){
            int temp=n%10;
            if(temp==0){
                v.push_back(5);
            }
            else{
                v.push_back(temp);
            }
            n/=10;
        }
        reverse(v.begin(), v.end());
        
        int res=v[0];
        for(int i=1; i<v.size(); i++){
            res=(res*10)+v[i];
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
}
// } Driver Code Ends