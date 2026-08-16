class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        int n = nums.size();
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto&m:mp){
            pq.push({m.second,m.first});
        }
        while(k--){
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};