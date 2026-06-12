// class Solution {  //method-01:-sorting
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         sort(nums.begin(),nums.end(),greater<int>());
//         return nums[k-1];
//     }
// };

// class Solution {//method-02:-priority queue
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         priority_queue<int> pq(nums.begin(),nums.end());
//         while(--k){
//             pq.pop();
//         }
//         return pq.top();
//     }
// };


class Solution {//method-03:-optimal
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> p;
        for(int i=0;i<k;i++){
            p.push(nums[i]);
        }
        for(int i=k;i<nums.size();i++){
            if(p.top()<nums[i]){
                p.pop();
                p.push(nums[i]);
            }
        }
        return p.top();
    }
};
























