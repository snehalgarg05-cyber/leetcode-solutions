// class Solution {  //method-01:-sorting
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         sort(nums.begin(),nums.end(),greater<int>());
//         return nums[k-1];
//     }
// };

class Solution {//method-02:-priority queue
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(),nums.end());
        while(--k){
            pq.pop();
        }
        return pq.top();
    }
};

























