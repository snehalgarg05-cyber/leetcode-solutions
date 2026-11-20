class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ans=0;
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                ans=ans+abs(nums[i]-nums[i-1])+1;
                int var = abs(nums[i]-nums[i-1])+1;
                nums[i]+=var;
            }
            if(nums[i]==nums[i-1]){
                ans+=1;
                nums[i]=nums[i]+1;
            }
        }
        return ans;
    }
};