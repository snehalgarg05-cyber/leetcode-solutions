class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2);
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int remaining = target-nums[i];
            if(mp.find(nums[i])!=mp.end()){
                result[0]=mp[nums[i]];
                result[1]=i;
            }
            mp[remaining]=i;
        }
        return result;
    }
};