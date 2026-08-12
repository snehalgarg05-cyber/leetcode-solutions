class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int len=0,start=0,end=0,n=nums.size();
        unordered_map<int,int>count;
        while(end<n){
            count[nums[end]]++;
            while(count[nums[end]]>k){
                count[nums[start]]--;
                start++;
            }
            len=max(len,end-start+1);
            end++;
        }
        return len;
        
    }
};