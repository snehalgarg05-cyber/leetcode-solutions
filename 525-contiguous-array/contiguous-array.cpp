class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        mp[0]=-1;
        int max_len = 0;
        int result=0;
        int cum_sum=0;
        for(int i=0;i<n;i++){
            cum_sum+=(nums[i]==1)?1:-1;
            if(mp.find(cum_sum)!=mp.end()){
                result =max(result,i-mp[cum_sum]);
            }
            else{
                mp[cum_sum]=i;
            }
        }
        return result;
    }
};