class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2,-1);
        int n = nums.size();
        int start=0,end=n-1;
        int ans1=-1,ans2=-1;
        while(start<=end){ //first
            int mid = start+(end-start)/2;
            if(nums[mid]==target){
                ans1=mid;
                end=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        start=0,end=n-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(nums[mid]==target){
                ans2=mid;
                start=mid+1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        result[0]=ans1;
        result[1]=ans2;
        return result;
    }
};