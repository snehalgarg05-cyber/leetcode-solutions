class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int start=0,end=n-1;
        int max_pair=0;
        while(start<=end){
            max_pair = max(max_pair,nums[start]+nums[end]);
            start++,end--;
        }
        return max_pair;
    }
};