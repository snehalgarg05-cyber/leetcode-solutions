class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int count=0;
        int odd_cnt=0;
        unordered_map<int,int> mp;
        mp[odd_cnt]=1; //seen odd count 0 in past
        for(int i=0;i<n;i++){
            odd_cnt+=(nums[i]%2);
            if(mp.find(odd_cnt-k)!=mp.end()){
                count+=mp[odd_cnt-k];
            }
            mp[odd_cnt]++;
        }
        return count;
    }
};