class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        for(int i=0;i<piles.size();i++){
            pq.push(piles[i]);
        }
        while(k--){
            int maxelement= pq.top();
            pq.pop();
            maxelement= maxelement- (maxelement/2);
            pq.push(maxelement);
            
        }
        int sum=0;
     while(!pq.empty()){
         sum+=pq.top();
         pq.pop();
         
     }
        return sum;
    }
};