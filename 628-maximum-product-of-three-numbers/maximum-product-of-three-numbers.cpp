class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int max1 = nums[n-1]*nums[n-2]*nums[n-3];//if numbers are positive

        int max2 = nums[0]*nums[1]*nums[n-1];//if numbers are negative;
        long long ans = max(max1,max2);
        return ans;
    }
};