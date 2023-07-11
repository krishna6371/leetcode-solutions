//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Node{
    public:
    int data;
    Node* left,*right;
    Node(int val){
        data= val;
        left= 0;
        right=0;
    }
};

class Solution{
    public:
    Node* insert(Node* root,int val,int &sucessor){
        if(!root) return new Node(val);
        if(val>= root -> data){
            root -> right=insert(root -> right,val,sucessor);
        }
        else{
            sucessor= root -> data;
            root -> left= insert(root -> left,val,sucessor);
            
        }
        return root;
    }
    vector<int> findLeastGreater(vector<int>& arr, int n) {
        vector<int> ans(arr.size(),-1);
        Node* root = 0;
        // traversing from right side
        for(int i=arr.size()-1;i>=0;i--){
            int sucessor= -1;
            root =insert(root,arr[i],sucessor);
            ans[i]=sucessor;
            
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
	    int n;
	    cin >> n;
	    vector<int>arr(n);
	    for(int i = 0 ; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findLeastGreater(arr, n);
	    for(auto it : ans){
	        cout << it << " ";
	    }
	    cout <<endl;
	}
	return 0;
}

// } Driver Code Ends