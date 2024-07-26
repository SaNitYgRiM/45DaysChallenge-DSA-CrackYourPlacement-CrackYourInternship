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
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) 
            return 0; 
        int ans = 0;
        queue<pair<TreeNode*, int>> q; 
        q.push({root, 1}); 
        while(q.empty() == false) 
        {
            int size = q.size(); 
            int minAtLevel = q.front().second; 
            int mn, mx;
            for(int i= 0; i < size; i++)
            {
                int curr_index = q.front().second - minAtLevel + 1;
                TreeNode* node = q.front().first;
                q.pop(); 
                if(i == 0) mn = curr_index; 
                if(i == size - 1)mx = curr_index;
                if(node -> left != NULL)q.push({node -> left, 2LL * curr_index});
                
                if(node -> right != NULL) q.push({node -> right, 2LL * curr_index + 1});
            }
            ans = max(ans, mx - mn + 1); 
        }
        return ans; 
        
    }
};
