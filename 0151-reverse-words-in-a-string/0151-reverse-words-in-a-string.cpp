class Solution {
public:
    string reverseWords(string s) {
        string temp="";
        string ans="";
        int left=0;
        int right=s.length()-1;
        while(s[left]==' '){
            left++;
}
        while(s[right]==' '){
            right--;
}
        while(left<= right){
            if(s[left]!=' '){
                temp+=s[left];
}else{
                if(s[left-1]==' '){
                    left++;
                    continue;
}
                else{
                    ans=temp+" "+ans;
                    temp="";
}
                
}
            left++;       
}
        ans=temp+" "+ans;
        
        ans.erase(ans.begin()+ans.length()-1,ans.end());
        return ans;
        
    }
};