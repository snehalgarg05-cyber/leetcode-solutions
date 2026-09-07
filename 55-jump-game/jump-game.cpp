class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int max_idx=0;
        for(int i=0;i<n;i++){
            if(i+nums[i]>max_idx){
                max_idx=i+nums[i];
            }
            if(max_idx>=n-1){
                return true;
            } 
            if(i>=max_idx){
                return false;
            }
              
        }
        
        return false;
    }
};