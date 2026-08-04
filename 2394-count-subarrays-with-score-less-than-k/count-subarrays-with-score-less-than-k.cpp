class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {

        long long count = 0;
        long long sum = 0;

        int n = nums.size();
        int start = 0;
        int end = 0;

        while(end < n) {

            sum += nums[end];

            while(sum * (end - start + 1LL) >= k) {
                sum -= nums[start];
                start++;
            }

            count += end - start + 1;

            end++;
        }

        return count;
    }
};