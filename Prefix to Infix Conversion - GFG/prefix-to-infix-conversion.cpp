//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  bool isExpression(char c){
      if(c=='+'|| c=='-'|| c=='*'|| c=='/'||c=='^'||c=='%'){
          return true;
      }
      else{
          return false;
      }
  }
    string preToInfix(string pre_exp) {
        int n= pre_exp.length();
        string ans="";
        stack<string>st;
        
        for(int i=n-1;i>=0;i--){
         if(isExpression(pre_exp[i])){
             
               if(st.size()>=2){
             string top1=st.top();
             st.pop();
           
             string top2=st.top();
             st.pop();
            string ans='('+top1+pre_exp[i]+top2+')';
            st.push(ans);
               }
         }
         else{
             st.push(string(1,pre_exp[i]));
         }
            
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
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
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToInfix(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends