// Validate Binary Search Tree

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
    bool isValidBST(TreeNode* root) 
    {
        if (!root) 
            return true;
        TreeNode *cur = root, *pre, *parent = NULL;
        bool res = true;
        while (cur) 
        {
            if (!cur->left)
            {
                if (parent && parent->val >= cur->val) 
                    res = false;
                parent = cur;
                cur = cur->right;
            } 
            else 
            {
                pre = cur->left;
                while (pre->right && pre->right != cur) 
                    pre = pre->right;
                if (!pre->right) 
                {
                    pre->right = cur;
                    cur = cur->left;
                } 
                else 
                {
                    pre->right = NULL;
                    if (parent->val >= cur->val) res = false;
                    parent = cur;
                    cur = cur->right;
                }
            }
        }
        return res;
    }
};
