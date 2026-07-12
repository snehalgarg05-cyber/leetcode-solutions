class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;       
        int rank=1; 
        for(int i=0;i<n;i++){
            pq.push({arr[i],i});
        }
        while(!pq.empty()){
            auto element = pq.top();
            arr[element.second]=rank;
            pq.pop();
            auto compare = pq.top();
            if(element.first==compare.first)
            continue;
            else{
                rank++;
            }
        }
        return arr;
    }
};