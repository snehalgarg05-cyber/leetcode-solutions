/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int ans = 0; // global max diameter
    
    int dfs(TreeNode* node) {
        if (!node) return 0;
        
        int left  = dfs(node->left);   // height of left
        int right = dfs(node->right);  // height of right
        
        // Update diameter passing through this node
        ans = max(ans, left + right);
        
        // Return height to parent
        return 1 + max(left, right);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return ans;
    }
};