// class Solution { //tle
// public:
//     long long maximumTripletValue(vector<int>& nums) {
//         int n = nums.size();
//         long long ans = 0;
//         for(int i=0;i<n-2;i++){
//             for(int j=i+1;j<n-1;j++){
//                 for(int k=j+1;k<n;k++){
//                     ans = max(ans,1LL*(nums[i]-nums[j])*nums[k]);
//                 }
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();

        // Maximum element from the right
        vector<int> suffixMax(n);
        suffixMax[n - 1] = nums[n - 1];

        for(int i = n - 2; i >= 0; i--) {
            suffixMax[i] = max(suffixMax[i + 1], nums[i]);
        }
        long long ans = 0;
        int maxi = nums[0];
        for(int j = 1; j < n - 1; j++) {
            // maxi = maximum nums[i] where i < j
            maxi = max(maxi, nums[j - 1]);
            // suffixMax[j+1] = maximum nums[k] where k > j
            ans = max(ans, 1LL * (maxi - nums[j]) * suffixMax[j + 1]);
        }

        return ans;
    }
};




















