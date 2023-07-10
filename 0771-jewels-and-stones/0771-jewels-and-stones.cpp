class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<int> v;
        for(int i=0;i<jewels.length();i++){
            int count=0;
            for(int j=0;j<stones.length();j++){
                if(jewels[i]==stones[j]){
                    count++;
                }
            }
            v.push_back(count);
            
        }
        int sum=0;
        for(int k=0;k<v.size();k++){
            sum+=v[k];
        }
        return sum;
        
    }
};