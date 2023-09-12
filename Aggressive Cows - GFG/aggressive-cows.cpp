//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
   bool possible(vector<int> &stalls,int n,int k,int mid){
       int pos=stalls[0];
       int count=1;
       for(int i=1;i<n;i++){
           if(stalls[i]-pos>=mid){
               pos=stalls[i];
               count++;
           }
           if(count==k){
               return true;
           }
       }
       return false;
   }
    int solve(int n, int k, vector<int> &stalls) {
    //first we have to sort that because it is a pool nothing else we have to make 
    //each pool paas paas
    sort(stalls.begin(),stalls.end());
     int s=0;
     int e=stalls[n-1]-stalls[0];
     int mid=s+(e-s)/2;
     int ans=-1;
     while(s<=e){
         if(possible(stalls,n,k,mid)){
             ans=mid;
             s=mid+1;
             
         }
         else{
             e=mid-1;
         }
         mid=s+(e-s)/2;
     }
     return ans;
    
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends