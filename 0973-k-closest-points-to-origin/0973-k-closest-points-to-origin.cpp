class compare{
    public:
    bool operator()(pair<int,int>&a,pair<int,int>&b){
        int dista=a.first*a.first+a.second*a.second;
        int distb= b.first*b.first+b.second*b.second;
        return dista>distb;
    }
    
};
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
         vector<vector<int>> ans;
        priority_queue<pair<int,int> ,vector<pair<int,int>>,compare> pq;
        for(auto it: points ){
            pq.push({it[0],it[1]});
        }
        while(!pq.empty()&& k--){
            auto top=pq.top();
            ans.push_back({top.first,top.second});
            pq.pop();
            
        }
        
       return ans; 
    }
};