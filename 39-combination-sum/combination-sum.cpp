class Solution {
public:

    void combination(vector<int> &candidates,int index,int n,int target,vector<vector<int>> &result,vector<int> &temp){
        if(target==0){
            result.push_back(temp);
            return;
        }
        if(target<0 || index==n){
            return;
        }
        combination(candidates,index+1,n,target,result,temp);

        temp.push_back(candidates[index]);

        combination(candidates,index,n,target-candidates[index],result,temp);

        temp.pop_back();

        
    }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> temp;
        int n = candidates.size();
        combination(candidates,0,n,target,result,temp);
        return result;
    }
};