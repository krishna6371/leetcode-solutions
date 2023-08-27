//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		  sort(v.begin(),v.end());
		  int ans=0;
		  int n=v.size();
		  if(n==1)
		  return v[0];
		  if(n%2==0){
		  
		      
		      ans=v[(n/2)-1]+v[(n/2)];
		      ans/=2;
		      
		  }
		  else{
		      ans=v[n/2];
		  }
		  return ans;
		  
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends