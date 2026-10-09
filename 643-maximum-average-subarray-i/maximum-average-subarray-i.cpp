class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxi = INT_MIN;
        int n = nums.size();
        double avg=0.0;
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        avg = sum/k;
        maxi = max(maxi,avg);
        for(int i=k;i<n;i++){
            sum-=nums[i-k];
            sum+=nums[i];
            avg = sum/k;
            maxi = max(maxi,avg);
        }
        return maxi;
    }
};