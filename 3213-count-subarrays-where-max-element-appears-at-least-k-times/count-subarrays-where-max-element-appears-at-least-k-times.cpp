// class Solution {
// public:
//     long long countSubarrays(vector<int>& nums, int k) {

//         int n = nums.size();

//         // Step 1: find maximum element of array
//         int maxElement = *max_element(nums.begin(), nums.end());

//         long long result = 0;

//         // Step 2: generate all subarrays
//         for(int i = 0; i < n; i++){

//             int count = 0;

//             for(int j = i; j < n; j++){

//                 // Step 3: count max element
//                 if(nums[j] == maxElement){
//                     count++;
//                 }

//                 // Step 4: check condition
//                 if(count >= k){
//                     result++;
//                 }
//             }
//         }

//         return result;
//     }
// };


class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxEle=0 , n= nums.size();
        for(int i=0;i<n;i++){
            maxEle = max(maxEle,nums[i]);
        }
        long long total=0;
        int count=0 , start=0 , end=0;
        while(end<n){
            if(nums[end]==maxEle){
                count++;
            }
            while(count==k){
                total+=n-end;
                if(nums[start]==maxEle){
                    count--;
                }
                start++;
            }
            end++;
        }
        return total;
    }
};









