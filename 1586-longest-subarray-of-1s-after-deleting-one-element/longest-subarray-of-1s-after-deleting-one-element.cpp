class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int start=0,end=0;
        int max_len=0;
        int zero_cnt=0;
        while(end<n){
            if(nums[end]==0){
                zero_cnt++;
            }
            while(zero_cnt>1){
                if(nums[start]==0){
                    zero_cnt--;
                }
                start++;
            }
            max_len = max(max_len,end-start);
            end++;
        }
        return max_len;
    }
};