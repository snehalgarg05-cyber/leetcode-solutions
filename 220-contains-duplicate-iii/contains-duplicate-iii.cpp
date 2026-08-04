class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, 
                                       int indexDiff, 
                                       int valueDiff) {
        
        set<long long> window;

        for (int j = 0; j < nums.size(); j++) {

            // Find smallest value >= nums[j] - valueDiff
            auto it = window.lower_bound(
                (long long)nums[j] - valueDiff
            );

            // Check whether that value is also <= nums[j] + valueDiff
            if (it != window.end() &&
                *it <= (long long)nums[j] + valueDiff) {
                return true;
            }

            window.insert(nums[j]);

            // Keep only previous indexDiff elements
            if (j >= indexDiff) {
                window.erase(nums[j - indexDiff]);
            }
        }

        return false;
    }
};