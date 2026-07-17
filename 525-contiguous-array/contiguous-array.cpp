// class Solution {  //TLE:brute force 
// public:
//     int findMaxLength(vector<int>& nums) {
//         int n = nums.size();
//         int max_len=0,curr_len=0;
//         for(int i=0;i<n;i++){
//             int zero_cnt=0;
//             int one_cnt=0;
//             for(int j=i;j<n;j++){
//                 if(nums[j]==0){
//                     zero_cnt++;
//                 }
//                 else{
//                     one_cnt++;
//                 }
//                 if(zero_cnt==one_cnt){
//                     curr_len=j-i+1;
//                 }
//             }
//             max_len = max(max_len,curr_len);
//         }
//         return max_len;
//     }
// };


class Solution {  //optimal: prefix sum 
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        int curr_sum=0,result=0;
        mp[0]=-1;
        for(int i=0;i<n;i++){
            curr_sum+=(nums[i]==1)?1:-1;
            if(mp.find(curr_sum)!=mp.end()){
                result=max(result,i-mp[curr_sum]);
            }
            else{
                mp[curr_sum]=i;
            }
        }
        return result;
    }
};


















