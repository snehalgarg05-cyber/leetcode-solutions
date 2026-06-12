class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long>p;
        int n = gifts.size();
        for(int i=0;i<n;i++){
            p.push(gifts[i]);
        }
       
        while(k--){
            int store = sqrt(p.top());
            p.pop();
            p.push(store);
        }
        long long result=0;
        while(!p.empty()){
            result+=p.top();
            p.pop();
        }
        return result;
    }
};