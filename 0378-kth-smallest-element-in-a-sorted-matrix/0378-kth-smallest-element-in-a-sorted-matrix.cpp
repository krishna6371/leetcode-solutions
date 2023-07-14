class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> v;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                v.push_back(matrix[i][j]);
            }
        }
     priority_queue<int> pq;
        for(int i=0;i<k;i++){
            pq.push(v[i]);
        }
        for(int j=k;j<v.size();j++){
            int element=v[j];
            if(element<pq.top()){
                pq.pop();
                pq.push(element);
            }
        }
        int ans=pq.top();
        return ans;
        
    }
};