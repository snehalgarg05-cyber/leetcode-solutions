class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        
        int n = nums.size();
        int start = 0;
        int ans = 0;

        multiset<int> s;

        for(int end = 0; end < n; end++) {
            
            s.insert(nums[end]);

            while(*s.rbegin() - *s.begin() > limit) {
                s.erase(s.find(nums[start]));
                start++;
            }

            ans = max(ans, end - start + 1);
        }

        return ans;
    }
};