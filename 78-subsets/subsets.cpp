class Solution {
public:

    void subset(vector<int>& nums, int index, int n, vector<vector<int>>& result,vector<int>& temp){
        if(index==n){
            result.push_back(temp);
            return;
        }
        subset(nums,index+1,n,result,temp);
        temp.push_back(nums[index]);
        subset(nums,index+1,n,result,temp);
        temp.pop_back();
    }


    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> result;
        vector<int> temp;
        subset(nums,0,n,result,temp);
        return result;
    }
};