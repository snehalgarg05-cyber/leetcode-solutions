class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
       priority_queue<int> pq(piles.begin(),piles.end());
       while(k--){
        int store=pq.top();
        store-=floor(pq.top()/2);
        pq.pop();
        pq.push(store);
       } 
       int sum=0;
       while(!pq.empty()){
        sum+=pq.top();
        pq.pop();
       }
       return sum;
    }
};