class Solution {
public:

    void subset(vector<int>& nums,vector<vector<int>>& ans,vector<int>& temp,int index,int n){
        if(index==n){
            ans.push_back(temp);
            return;
        }
        subset(nums,ans,temp,index+1,n);
        temp.push_back(nums[index]);
        subset(nums,ans,temp,index+1,n);
        temp.pop_back();
    }



    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n = nums.size();
        subset(nums,ans,temp,0,n);
        return ans;
    }
};