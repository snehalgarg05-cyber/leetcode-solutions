class Solution {
public:

    void permute(vector<int> &nums,vector<vector<int>> &result,int index){
        if(index==nums.size()){
            result.push_back(nums);
            return;
        }
        vector<bool> use(21,0);
        for(int i=index;i<nums.size();i++){
            if(use[nums[i]+10]==0){
                swap(nums[index],nums[i]);
                permute(nums,result,index+1);
                swap(nums[index],nums[i]);
                use[nums[i]+10]=1;
            }
        }
    }


    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> result;
        permute(nums,result,0);
        return result;
    }
};