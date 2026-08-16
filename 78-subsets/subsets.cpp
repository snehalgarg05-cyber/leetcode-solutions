class Solution {
public:
    int n;

    void subset(vector<int>& nums, int i,vector<int>& temp, vector<vector<int>>& result){
        if(i==n){
            result.push_back(temp);
            return;
        }
        subset(nums,i+1,temp,result);//skip
        temp.push_back(nums[i]);
        subset(nums,i+1,temp,result);
        temp.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;
        n = nums.size();
        subset(nums,0,temp,result);
        return result;
    }
};