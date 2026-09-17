class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto m : mp){
            if(m.second>1){
                return m.first;
            }
        }
        return 0;
    }
};