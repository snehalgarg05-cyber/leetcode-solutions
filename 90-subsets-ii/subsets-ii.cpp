class Solution {
public:

    int n;

    void subset(vector<int>& nums, int i, vector<int>& temp,
                set<vector<int>>& result) {

        if(i == n) {
            result.insert(temp);
            return;
        }

        // Don't take
        subset(nums, i + 1, temp, result);

        // Take
        temp.push_back(nums[i]);
        subset(nums, i + 1, temp, result);
        temp.pop_back();
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        n = nums.size();

        sort(nums.begin(), nums.end());   // ⭐ THIS WAS MISSING

        set<vector<int>> result;
        vector<int> temp;

        subset(nums, 0, temp, result);

        vector<vector<int>> ans(result.begin(), result.end());

        return ans;
    }
};