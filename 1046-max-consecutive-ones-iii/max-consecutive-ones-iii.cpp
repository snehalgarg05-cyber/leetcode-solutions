class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int start=0,end=0;
        int zero_cnt=0;
        int max_len=0;
        while(end<n){
            if(nums[end]==0){
                zero_cnt++;
            }
            while(zero_cnt>k){
                if(nums[start]==0){
                    zero_cnt--;
                }
                start++;
            }
            max_len = max(max_len,end-start+1);
            end++;
        }
        return max_len;
    }
};