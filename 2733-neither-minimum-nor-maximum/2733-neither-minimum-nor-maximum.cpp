class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int max= INT_MIN;
        int min= INT_MAX;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>max){
            max= nums[i];
        }
    }
        for(int i=0;i<nums.size();i++){
            if(nums[i]<min){
                min=nums[i];
            }
        }
     vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=max && nums[i]!= min){
                ans.push_back(nums[i]);
            }
        }
        if(ans.size()==0){
            return -1;
        }
        else
            return ans[0];
            
        
        
    }
};