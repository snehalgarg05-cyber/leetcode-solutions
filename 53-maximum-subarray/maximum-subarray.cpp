class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max_sum=INT_MIN,cum_sum=0;
        for(int i=0;i<n;i++){
            cum_sum+=nums[i];
            max_sum=max(max_sum,cum_sum);
            if(cum_sum<0){
                cum_sum=0;
            }
        }
        return max_sum;
    }
};