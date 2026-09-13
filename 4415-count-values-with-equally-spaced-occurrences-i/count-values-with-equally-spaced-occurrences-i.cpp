class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        int count=0;
        for(auto & it:mp){
            if(it.second.size()==3){
                vector<int> pos = it.second;
                if(pos[1]-pos[0]==pos[2]-pos[1]){
                    count++;
                }
            }
        }
        return count;
    }
};