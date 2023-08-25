//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        // code here
        vector<int> v;
        v.push_back(1);
        int carry=0;
        for(int i=2;i<=N;i++){
            for(int j=0;j<v.size();j++){
                int sum=v[j]*i+carry;
                int rem=sum%10;
                v[j]=rem;
               carry=sum/10;
            }
            while(carry){
                v.push_back(carry%10);
             carry/=10;
            }
            carry=0;
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends