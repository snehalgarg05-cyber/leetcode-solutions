class Solution {
public:
    string frequencySort(string s) {
        string result;
        int n = s.size();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto m:mp){
            pq.push({m.second,m.first});
        }
        while(!pq.empty()){
            int freq = pq.top().first;
            char ch = pq.top().second;
            while(freq--){
                result.push_back(ch);
            }
            pq.pop();
        }
        return result;
    }
};