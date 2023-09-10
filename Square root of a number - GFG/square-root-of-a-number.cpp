//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
   long long int s=0;
   long long int e=x;
   long long int mid=s+(e-s)/2;
   long long int maxi=INT_MIN;
   while(s<=e){
       if(mid*mid<=x){
           maxi=max(mid,maxi);
           s=mid+1;
       }
       else{
           e=mid-1;
       }
      mid=s+(e-s)/2;
   }
   return maxi;
   
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends