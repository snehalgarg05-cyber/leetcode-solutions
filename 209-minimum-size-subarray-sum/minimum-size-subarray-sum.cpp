class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int start=0,end=0;
        int sum=0;
        int min_len=INT_MAX;
        while(end<n){
            sum+=nums[end];
            while(sum>=target){
                min_len = min(min_len,end-start+1);
                sum-=nums[start];
                start++;
            }
            end++;
        }
        if(min_len==INT_MAX){
            return 0;
        }
        return min_len;
    }
};