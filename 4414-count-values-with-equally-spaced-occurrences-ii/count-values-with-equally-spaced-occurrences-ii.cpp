class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        int count=0,first=1;
        for(auto & it:mp){
            if(it.second.size()>=3){
                vector<int> pos = it.second;
                first=1;
                for(int i=1;i<pos.size()-1;i++){
                    if(pos[i]-pos[i-1]!=pos[i+1]-pos[i]){
                        first=0;
                        break;
                    }
                }
                if(first==1){
                    count++;
                }
            }
        }
        return count;
    }
};