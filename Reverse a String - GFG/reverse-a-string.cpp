//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

string reverseWord(string str){
    int l=0; 
    int r=str.length()-1;
    
    while(l<r){
        int temp = str[l];
        str[l]=str[r];
        str[r]=temp;
        l++;
        r--;
    }
    return str;
  //Your code here
}



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends