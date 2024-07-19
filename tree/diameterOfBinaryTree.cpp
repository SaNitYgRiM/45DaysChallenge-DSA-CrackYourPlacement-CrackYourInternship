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
    private:
     int maxi=0;
     int diameter(TreeNode* root){
        if(root == NULL)return 0;
        int leftDepth = diameter(root->left);
        int rightDepth = diameter(root->right);
        int cur = leftDepth + rightDepth;
        maxi = max(maxi, cur);
        return 1 + max(leftDepth, rightDepth);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        diameter(root);
        return maxi;
    }
};
