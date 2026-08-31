class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int count=0;
        int pairs=0;
        for(auto& m: mp){
            if(m.second%2==1 && m.second>1){
                count+=1;
                pairs+=m.second/2;
            }
            else if(m.second==1){
                count+=1;
            }
            else{
                pairs+=m.second/2;
            }
        }
        result.push_back(pairs);
        result.push_back(count);
        return result;
    }
};