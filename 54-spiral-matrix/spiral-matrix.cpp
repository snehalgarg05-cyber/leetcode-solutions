class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int n = matrix.size();
        int m = matrix[0].size();
        int top = 0, left = 0, right = m - 1, bottom = n - 1;

        while(top <= bottom && left <= right){
            for(int j = left; j <= right; j++){ // as row is same
                result.push_back(matrix[top][j]);
            }
            top++;

            for(int i = top; i <= bottom; i++){ // as col is same
                result.push_back(matrix[i][right]);
            }
            right--;

            if(top <= bottom){
                for(int j = right; j >= left; j--){ // as row is same
                    result.push_back(matrix[bottom][j]);
                }
                bottom--;
            }

            if(left <= right){
                for(int i = bottom; i >= top; i--){ // as col is same
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }  

        return result;
    }
};