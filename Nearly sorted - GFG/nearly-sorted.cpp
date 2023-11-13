//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
 
    vector <int> nearlySorted(int arr[], int num, int K){
        priority_queue<int,vector<int>,greater<int>> pq;
        int i=0;
        vector<int>v;
        while(i<num){
            pq.push(arr[i]);
            if(pq.size()>K){
                v.push_back(pq.top());
                pq.pop();
            }
            i++;
        }
        while(!pq.empty()){
            v.push_back(pq.top());
            pq.pop();
        }
        return v;
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    int num, K;
	    cin>>num>>K;
	    
	    int arr[num];
	    for(int i = 0; i<num; ++i){
	        cin>>arr[i];
	    }
	    Solution ob;
	    vector <int> res = ob.nearlySorted(arr, num, K);
	    for (int i = 0; i < res.size (); i++)
	        cout << res[i] << " ";
	        
	    cout<<endl;
	}
	
	return 0;
}

// } Driver Code Ends