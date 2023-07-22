class Solution {
public:
    string makeSmallestPalindrome(string s) {
             string ans=s;
            int i;
        int j;
        for(i=0,j=s.length()-1;i<s.length()/2;i++,j--){
            if(s[i]== s[j]){
                ans[i]=s[i];
                ans[j]=s[j];
                cout<<ans[i]<<endl;
            }
            else{
           char c=min(s[i],s[j]);
            ans[i]=c;
                ans[j]=c;
                
                }
        }
        return ans;   
    }
};