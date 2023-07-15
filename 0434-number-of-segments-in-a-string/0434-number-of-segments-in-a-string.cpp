class Solution {
public:
    int countSegments(string s) {
        int count=0;
        for(int i=0;i<s.length();i++){
            while(i<s.length()&& s[i]==' ') i++;
            bool flag= false;
            while(i<s.length() && s[i]!=' ' ){
                i++;
                flag= true;
            }
            if(flag) count++;
        }
        return count;
    }
};