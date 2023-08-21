//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int lo=0;
        int hi=n-1;
        int mid=0;
        // lo zero ka track rakh raha he so that it always places where non zero 
        //element comes so that we have just change zero and 2
        // if one element 2 is plced at last then reduce its value
        while(mid<=hi){
            
            if(a[mid]==0){
                swap(a[lo],a[mid]);
                lo=lo+1;
                mid=mid+1;
            }
           else if(a[mid]==1){
                mid=mid+1;
              
            }
           else if(a[mid]==2){
                swap(a[mid],a[hi]);
                hi=hi-1;
               
            }
        }
        // code here 
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends