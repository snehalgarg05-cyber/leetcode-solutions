// class Solution {//brute force algorithm
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n=nums.size();
//         for(int i=0;i<n-1;i++){
//             for(int j=i+1;j<n;j++){
//                 if(nums[i]+nums[j]==target){
//                     return{i,j};
//                 }
//             }
//         }
//     return{};//no pair found
        
//     }
// };


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int remaining=target-nums[i];
            if(mp.find(remaining)!=mp.end()){
                return{mp[remaining],i};
            }
            mp[nums[i]]=i;
        }
        return{};
        
    }
};