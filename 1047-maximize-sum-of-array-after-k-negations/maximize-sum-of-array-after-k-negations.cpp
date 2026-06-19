// class Solution {
// public:
//     int largestSumAfterKNegations(vector<int>& nums, int k) {
//         priority_queue<int,vector<int>,greater<int>>pq(nums.begin(),nums.end());
//         int n = nums.size();
//         while(k--){
//             int store=pq.top();
//             pq.pop();
//             pq.push(-store);
//         }
//         int sum=0;
//         while(!pq.empty()){
//             sum+=pq.top();
//             pq.pop();
//         }
//         return sum;
//     }
// };

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int n = nums.size();

        for(int i = 0; i < n && k > 0; i++) {
            if(nums[i] < 0) {
                nums[i] = -nums[i];
                k--;
            }
        }

        int sum = 0;
        int mn = INT_MAX;

        for(int x : nums) {
            sum += x;
            mn = min(mn, x);
        }

        if(k % 2 == 1) {
            sum -= 2 * mn;
        }

        return sum;
    }
};