class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int count=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        int cum_sum=0;
        for(int i=0;i<n;i++){
            cum_sum+=nums[i];
            if(mp.find(cum_sum-goal)!=mp.end()){
                count+=mp[cum_sum-goal];
            }
            mp[cum_sum]++;
        }
        return count;
    }
};