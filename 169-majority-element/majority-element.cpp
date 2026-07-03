class Solution {
public:
    int majorityElement(vector<int>& nums) {

        priority_queue<pair<int,int>>p;

        unordered_map<int,int> mp;
        
        int n = nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto& m:mp){
            p.push({m.second,m.first});
        }
        return p.top().second;
    }
};