//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
    vector<int> v1;
    int m=array1.size();
    int n=array2.size();
    int i=0;
    int j=0;
    for( i=0,j=0;i<m && j<n;){
        if(array1[i]==array2[j]){
            v1.push_back(array1[i]);
            v1.push_back(array2[j]);
            i++;
            j++;
        }
        else if(array1[i]<array2[j]){
            v1.push_back(array1[i]);
            i++;
        }
        else{
            v1.push_back(array2[j]);
            j++;
        }
    }
    while(i<m){
        v1.push_back(array1[i]);
        i++;
    }
    while(j<n){
        v1.push_back(array2[j]);
        j++;
    }
      double ans=0;
		  int n1=v1.size();
		  if(n1==1)
		  return v1[0];
		  if(n1%2==0){
		  
		      
		      ans=(double)v1[(n1/2)-1]+v1[(n1/2)];
		      ans/=2;
		      
		  }
		  else{
		      ans=(double)v1[n1/2];
		  }
		  return ans;
		  
		}
    
    
    
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends