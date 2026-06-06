class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>left_sum(n),right_sum(n),ans(n);
        left_sum[0]=0;
        right_sum[n-1]=0;
        int l_sum=0,r_sum=0;
        for(int i=1;i<n;i++){
            l_sum+=nums[i-1];
            left_sum[i]=l_sum;
        }
        for(int i=n-2;i>=0;i--){
            r_sum+=nums[i+1];
            right_sum[i]=r_sum;
        }
        for(int i=0;i<n;i++){
            ans[i]=abs(left_sum[i]-right_sum[i]);
        }
        return ans;
    }
};