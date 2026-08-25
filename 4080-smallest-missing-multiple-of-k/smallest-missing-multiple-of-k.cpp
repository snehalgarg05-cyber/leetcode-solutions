class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int j=k;
        while(true){
            if(mp.find(j)==mp.end()){
                return j;
            }
            j+=k;
        }
        return -1;
    }
};