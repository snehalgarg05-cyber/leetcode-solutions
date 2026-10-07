class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(),nums.end());
        int mini = *min_element(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]!=maxi && nums[i]!=mini){
                return nums[i];
            }
        }
        return -1;
    }
};