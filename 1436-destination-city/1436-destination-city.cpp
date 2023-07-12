class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,int>mp;
        for(int i=0;i<paths.size();i++){
            mp [paths[i][0]]++;
            mp[paths[i][1]]--;
        }
        string ans;
        for( auto it : mp){
            if(it.second==-1)
               ans= it.first;
}
        
  
      return ans;  
    }
};