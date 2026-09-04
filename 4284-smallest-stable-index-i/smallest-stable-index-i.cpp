class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int ans=-1;
        int max_el=INT_MIN;
        int min_el=INT_MAX;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>max_el){
                max_el=nums[i];
            }
            min_el=INT_MAX;
            for(int j=n-1;j>=i;j--){
                if(nums[j]<min_el){
                    min_el=nums[j];
                }
            }
            if(max_el-min_el<=k){
                ans=i;
                break;
            }
        }
        return ans;
    }
};