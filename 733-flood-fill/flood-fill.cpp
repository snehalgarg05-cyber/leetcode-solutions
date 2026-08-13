class Solution {
public:

    int m;
    int n;

    void dfs(vector<vector<int>>& image, int i, int j, int value, int color) {

        if(i < 0 || i >= m || j < 0 || j >= n || image[i][j] != value) {
            return;
        }

        image[i][j] = color;

        dfs(image, i + 1, j, value, color);
        dfs(image, i - 1, j, value, color);
        dfs(image, i, j + 1, value, color);
        dfs(image, i, j - 1, value, color);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image,
                                   int sr, int sc, int color) {

        m = image.size();
        n = image[0].size();

        int value = image[sr][sc];

        // VERY IMPORTANT
        if(value == color) {
            return image;
        }

        dfs(image, sr, sc, value, color);

        return image;
    }
};