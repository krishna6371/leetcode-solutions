class Solution {
public:
    int l=0,r=0;
    void helper(int left,int right,string &s,int &maxlen){
        while(left>=0 && right <=s.length()-1 && s[left]== s[right]){
            if(right-left+1>maxlen){
                maxlen= right-left+1;
                l= left;
                r= right;

            }
            left--;
            right++;
        }
        
    }
    string longestPalindrome(string s) {
        if(s.length()<=2 && s[0]==s[1]){
            return s.substr(0,2);
            
        }
        int maxlen=1;
        // for odd
        for(int i=1;i<=s.length()-1;i++) helper(i-1,i+1,s,maxlen);
               cout<<l<<r<<endl;
        //for even cases
        for(int i=0;i<=s.length()-1;i++) helper(i,i+1,s,maxlen);
        cout<<l<<r;
        return s.substr(l,r-l+1);
    }
};