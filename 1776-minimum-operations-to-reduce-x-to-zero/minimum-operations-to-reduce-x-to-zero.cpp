class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        unordered_map<int,int>mp;
        mp[0]=-1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            mp[sum]=i; //storing sum at corresponding index
        }
        if(sum<x){
            return-1;
        }
        int remaining_sum=sum-x;
        int longest_subarray=INT_MIN;
        sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int find_sum=sum-remaining_sum;
            if(mp.find(find_sum)!=mp.end()){
                int idx=mp[find_sum];
                longest_subarray=max(longest_subarray,i-idx);
            }
        }
        return longest_subarray==INT_MIN?-1:n-longest_subarray;
    }
};