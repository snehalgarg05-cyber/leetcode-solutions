// class Solution { //TLE
// public:
//     int firstStableIndex(vector<int>& nums, int k) {
//         int ans=-1;
//         int max_el=INT_MIN;
//         int min_el=INT_MAX;
//         int n = nums.size();
//         for(int i=0;i<n;i++){
//             if(nums[i]>max_el){
//                 max_el=nums[i];
//             }
//             min_el=INT_MAX;
//             for(int j=n-1;j>=i;j--){
//                 if(nums[j]<min_el){
//                     min_el=nums[j];
//                 }
//             }
//             if(max_el-min_el<=k){
//                 ans=i;
//                 break;
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> suffixMin(n, INT_MAX), prefixMax(n, INT_MIN);
        suffixMin[n - 1] = nums[n - 1];
        prefixMax[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefixMax[i] = max(prefixMax[i - 1], nums[i]);
        }
        for (int i = n - 2; i >= 0; i--) {
            suffixMin[i] = min(suffixMin[i + 1], nums[i]);
        }
        for (int i = 0; i < n; i++) {
            int suf_min = suffixMin[i], pref_max = prefixMax[i];
            if (pref_max - suf_min <= k) {
                return i;
            }
        }
        return -1;
    }
};