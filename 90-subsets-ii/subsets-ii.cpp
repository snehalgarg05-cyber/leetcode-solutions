class Solution {
public:

    int n;

    void subset(vector<int>& nums, int i, vector<int>& temp,vector<vector<int>>& result){
        if(i==n){
            result.push_back(temp);
            return;
        }
        subset(nums,i+1,temp,result);
        temp.push_back(nums[i]);
        subset(nums,i+1,temp,result);
        temp.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>> result;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        n = nums.size();
        subset(nums,0,temp,result);

        sort(result.begin(),result.end());

        
        vector<vector<int>> ans;

        ans.push_back(result[0]);

        for(int j=1;j<result.size();j++){
            if(result[j]!=result[j-1]){
                ans.push_back(result[j]);
            }
        }

        return ans;
    }
};