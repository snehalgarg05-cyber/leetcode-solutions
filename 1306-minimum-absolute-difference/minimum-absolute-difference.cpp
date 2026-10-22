class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& nums) {
        vector<vector<int>> result;
        int mini = INT_MAX;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(abs(nums[i]-nums[i-1])<mini){
                mini = abs(nums[i]-nums[i-1]);
            }
        }
        
        for(int i=1;i<n;i++){
            if(abs(nums[i]-nums[i-1])==mini){
                result.push_back({nums[i-1],nums[i]});
            }
        }
        return result;
    }
};