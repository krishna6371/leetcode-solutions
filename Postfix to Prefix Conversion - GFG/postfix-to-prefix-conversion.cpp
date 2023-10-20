//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  bool operator1(char ch){
      if(ch=='+'|| ch=='-'||ch=='*'||ch=='/'){
          return true;
      }
      else{
          return false;
      }
  }
    string postToPre(string post_exp) {
        stack<string> st;
        string ans="";
        for(int i=0;i<post_exp.length();i++){
            if(operator1(post_exp[i])){
                if(st.size()>=2){
                    string top1= st.top();
                    st.pop();
                    string top2=st.top();
                    st.pop();
                    string temp=post_exp[i]+top2+top1;
                    st.push(temp);
                }
            }
            else{
                st.push(string(1,post_exp[i]));
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
        string postfix;
        cin >> postfix;

        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToPre(postfix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends