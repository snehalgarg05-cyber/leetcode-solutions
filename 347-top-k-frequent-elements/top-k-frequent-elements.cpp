class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int> mp;
        priority_queue<vector<int>> p;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto &m:mp){
            p.push({m.second,m.first});
        }
        while(k--){
            ans.push_back(p.top()[1]);
            p.pop();
        }
        return ans;
    }
};