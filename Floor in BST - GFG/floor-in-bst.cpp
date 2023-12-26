//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};


// } Driver Code Ends
// Function to search a node in BST.
class Solution{
public:
int find(Node* root,int x,int &c){
    if(root==NULL) return 0;
    if(root-> data<=x){
        
        c=max(c,root-> data);
        find(root-> right,x,c);
    }
    if(root->data>x){
        find(root->left,x,c);
    }
    return c;
}
    int floor(Node* root, int x) {
       if(root==NULL) return 0;
       int c=INT_MIN;
       int ans= find(root,x,c);
       if(ans==INT_MIN){
           ans=-1;
       }
       return ans;
    }
};

//{ Driver Code Starts.

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int s;
        cin >> s;
        Solution obj;
        cout << obj.floor(root, s) << "\n";
    }
}

// } Driver Code Ends