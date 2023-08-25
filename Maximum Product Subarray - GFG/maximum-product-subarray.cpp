//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	   // int count=0;
	   // int count1=0;
	   // for(int i=0;i<n;i++){
	   //     if(arr[i]==0){
	   //         count++;
	   //     }
	   //     else if(arr[i]<0){
	   //         count1++;
	   //     }
	        
	   // }
	   // if(count+count1==n && count>0){
	   //     return 0;
	   // }
	   long long  prod=1;
	    long long  maxi=INT_MIN;
	    for(int i=0;i<n;i++){
	        prod*=arr[i];
	        maxi=max(prod,maxi);
	        if(arr[i]==0){
	            prod=1;
	        }
	    }
	  prod=1;
	    for(int i=n-1;i>=0;i--){
	        prod*=arr[i];
	        maxi=max(prod,maxi);
	       if(arr[i]==0){
	           prod=1;
	       }
	    }
	    
	    return maxi;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends