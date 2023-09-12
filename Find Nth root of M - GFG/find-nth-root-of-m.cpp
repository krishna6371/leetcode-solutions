//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	   int s=1;
	   int e=30;
	   int mid=s+(e-s)/2;
	   while(s<=e){
	       if(pow(mid,n)==m){
	           return mid;
	           break;
	       }
	       else if(pow(mid,n)<m){
	           s=mid+1;
	       }
	       else{
	           e=mid-1;
	       }
	       mid=s+(e-s)/2;
	   }
	   return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends