// class Solution {
// public:
//     int minStoneSum(vector<int>& piles, int k) {
//        priority_queue<int> pq(piles.begin(),piles.end());
//        while(k--){
//         int store=pq.top();
//         store-=floor(pq.top()/2);
//         pq.pop();
//         pq.push(store);
//        } 
//        int sum=0;
//        while(!pq.empty()){
//         sum+=pq.top();
//         pq.pop();
//        }
//        return sum;
//     }
// };


class Solution {//optimal
public:
    int minStoneSum(vector<int>& piles, int k) {

        // Max heap
        priority_queue<int> pq(piles.begin(), piles.end());

        long long sum = 0;

        // Calculate initial sum
        for (int x : piles) {
            sum += x;
        }

        // Perform k operations
        while (k--) {

            int x = pq.top();
            pq.pop();

            int removed = x / 2;   // floor(x/2)

            sum -= removed;

            pq.push(x - removed);
        }

        return sum;
    }
};