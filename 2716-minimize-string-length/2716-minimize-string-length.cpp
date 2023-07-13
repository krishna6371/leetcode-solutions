class Solution {
public:
    int minimizedStringLength(string s) {
  
        map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        return mp.size();
            
            
        
    
    }
};