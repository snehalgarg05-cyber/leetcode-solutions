class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        int cum_sum=0;
        for(int i=0;i<n;i++){
            cum_sum+=nums[i];
            if(mp.find(cum_sum-k)!=mp.end()){
                count+=mp[cum_sum-k];
            }
            mp[cum_sum]++;
        }
        return count;
    }
};