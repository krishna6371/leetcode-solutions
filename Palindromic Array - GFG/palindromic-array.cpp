//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
int check(int num){
    int num1=num;
    int res=0;
     while(num!=0){
    	        res=res*10+(num%10);
    	        num=num/10;
    	    }
    	    return (num1-res);
}
    int PalinArray(int a[], int n)
    {
        int count=0;
    	for(int i=0;i<n;i++){
    	    int num=a[i];
    	    int  ans= check(num);
    	   
    	  
    	    if(check(num)==0){
    	        count++;
    	    }
    	  
    	   // else{
    	   //     return false;
    	   //     break;
    	   // }
    	}
    
    	if(count==n)
    	return true;
    	else
    	return false;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends