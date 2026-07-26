// class Solution {
// public:

//     void permute(vector<int> &nums,int n,vector<vector<int>> &result,vector<int> &temp,vector<bool> &visited){
//         if(visited.size()==temp.size()){
//             result.push_back(temp);
//             return;
//         }
//         for(int i=0;i<n;i++){
//             if(visited[i]==0){
//                 visited[i]=1;
//                 temp.push_back(nums[i]);
//                 permute(nums,n,result,temp,visited);
//                 visited[i]=0;
//                 temp.pop_back();
//             }
//         }
//     }


//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>> result;
//         vector<int> temp;
//         int n = nums.size();
//         vector<bool> visited(n);
//         permute(nums,n,result,temp,visited);
//         return result;
//     }
// };

class Solution { //optimal with only stack space and not temp and visited space
public:

    void permute(vector<int> &nums,vector<vector<int>> &result,int index){
        if(index==nums.size()){
            result.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[i],nums[index]);
            permute(nums,result,index+1);
            swap(nums[i],nums[index]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {    
        vector<vector<int>> result;
        permute(nums,result,0);
        return result;
    }
};














