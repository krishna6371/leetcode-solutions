//{ Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution
{
public:
 int minSwap(int arr[], int n, int k) {
        int count = 0;  // Count of elements less than or equal to k
        for (int i = 0; i < n; ++i) {
            if (arr[i] <= k) {
                ++count;
            }
        }
        
        // Count the elements greater than k in the first 'count' positions
        int outOfPlace = 0;
        for (int i = 0; i < count; ++i) {
            if (arr[i] > k) {
                ++outOfPlace;
            }
        }
        
        int ans = outOfPlace;
        for (int i = 0, j = count; j < n; ++i, ++j) {
            if (arr[i] > k) {
                --outOfPlace;
            }
            if (arr[j] > k) {
                ++outOfPlace;
            }
            ans = min(ans, outOfPlace);
        }
        
        return ans;
    }
};
    // int minSwap(int arr[], int n, int k) {
    //  int unfav=0;
    //  int fav=0;
    //  for(int i=0;i<n;i++){
    //      if(arr[i]<=k){
    //          fav++;
    //      }
    //  }
    //  for(int i=0;i<fav;i++){
    //      if(arr[i]>k)
    //      unfav++;
    //  }
    //  int ans=unfav;
    //  cout<<ans<<endl;
    //  for(int i=0,j=fav;j<n;i++,j++){
    //      if(arr[i]>k)
    //      unfav--;
    //      if(arr[j]>k)
    //      unfav++;
    // ans=min(ans,unfav);
         
    //  }
     

//   return ans;
     
//     }
// };


//{ Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}

// } Driver Code Ends