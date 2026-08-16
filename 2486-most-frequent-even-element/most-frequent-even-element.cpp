class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>>pq;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                mp[nums[i]]++;
            }
        }
        for(auto&m:mp){
            pq.push({m.second,m.first});
        }
        if(pq.empty())
            return -1;

        int freq = pq.top().first;
        int min_value = pq.top().second;

        pq.pop();

        while(!pq.empty() && pq.top().first == freq) {
            int curr_val = pq.top().second;
            pq.pop();

            if(curr_val < min_value)
                min_value = curr_val;
        }

        return min_value;
    }
};