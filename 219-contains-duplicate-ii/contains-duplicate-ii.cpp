// class Solution {//brute force approach with TLE
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         int n = nums.size();
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(nums[i]==nums[j] && abs(i-j)<=k){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        if(n<=k){
            for(int i=0;i<n;i++){
                mp[nums[i]]++;
                if(mp[nums[i]]>1){
                    return true;
                }
            }
        }
        else{
            for(int i=0;i<=k;i++){
                mp[nums[i]]++;
                if(mp[nums[i]]>1){
                    return true;
                }
            }
            for(int i=k+1;i<n;i++){
                mp[nums[i]]++;
                mp[nums[i-k-1]]--;
                if(mp[nums[i]]>1){
                    return true;
                }
            }
        }
        return false;
    }
};




















