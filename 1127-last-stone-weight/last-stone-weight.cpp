class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>p;
        int n = stones.size();
        for(int i=0;i<n;i++){
            p.push(stones[i]);
        }
        while(p.size()>1){
            int a= p.top();
            p.pop();
            int b = p.top();
            p.pop();
            if(a==b){
                continue;
            }
            else{
                p.push(abs(b-a));
            }
        }
        if(!p.empty()){
            return p.top();
        }
        return 0;
    }
};