class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int prod = 1;
        int count=0;
        if(k<=1){
            return 0;
        }
        int start=0,end=0;
        while(end<n){
            prod*=nums[end];
            while(prod>=k){
                prod/=nums[start];
                start++;
            }
            count+=end-start+1;
            end++;
        }
        return count;
    }
};