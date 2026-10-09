class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int start=0,end=n-1;
        int ans=0;
        if(target<nums[0]){
            return 0;
        }
        if(target>nums[n-1]){
            return n;
        }
        while(start<=end){
            int mid = start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(target<nums[mid]){
                ans=mid;
                end--;
            }
            else{
                start++;
            }
        }
        return ans;
    }
};