//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  bool operator1(char c){
      if(c=='+'||c=='-'|| c=='*'||c=='/'){
          return true;
      
          
      }
      else
          return false;
      
  }
    string preToPost(string pre_exp) {
    int n=pre_exp.length()-1;
    stack<string> st;
    string ans="";
    for(int i=n;i>=0;i--){
        if(operator1(pre_exp[i])){
            if(st.size()>=2){
            string top1=st.top();
            st.pop();
            string top2=st.top();
            st.pop();
            string temp=top1+top2+pre_exp[i];
            st.push(temp);
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
        cout << obj.preToPost(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends