class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int m = matrix[0].size();
        priority_queue<int,vector<int>,greater<int>>p;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                p.push(matrix[i][j]);
            }
        }
        k=k-1;
        while(k--){
            p.pop();
        }
        return p.top();
    }
};