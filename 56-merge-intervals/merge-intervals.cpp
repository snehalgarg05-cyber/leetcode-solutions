class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n = arr.size();
        vector<vector<int>> result;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            int start = arr[i][0];
            int end = arr[i][1];
            if(result.empty() || arr[i][0]>result.back()[1]){
                result.push_back(arr[i]);
            }
            else{
                result.back()[1] = max(result.back()[1],arr[i][1]);
            }
        }
        return result;
    }
};