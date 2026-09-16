class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        // First position where target can occur
        int first = lower_bound(nums.begin(), nums.end(), target) - nums.begin();

        // First position greater than target
        int last = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;

        // Target does not exist
        if(first == nums.size() || nums[first] != target) {
            return {-1, -1};
        }

        return {first, last};
    }
};