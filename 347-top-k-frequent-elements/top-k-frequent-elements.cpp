class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> result;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto&m:mp){
            pq.push({m.second,m.first});
        }
        while(k--){
            int element = pq.top().second;
            result.push_back(element);
            pq.pop();
        }
        return result;
    }
};