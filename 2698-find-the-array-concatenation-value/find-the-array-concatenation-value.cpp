class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = n - 1;
        long long ans = 0;

        while (start < end) {
            int digits = to_string(nums[end]).size();
            ans += nums[start] * pow(10, digits) + nums[end];

            start++;
            end--;
        }

        if (start == end) {
            ans += nums[start];
        }

        return ans;
    }
};