class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total_sum=0,left_sum=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            total_sum+=nums[i];
        }
        for(int i=0;i<n;i++){
            left_sum+=nums[i];
            if(left_sum==total_sum){
                return i;
            }
            total_sum-=nums[i];
        }
        return -1;
    }
};