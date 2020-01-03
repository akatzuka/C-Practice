/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val)
    {
        TreeNode* subRoot = lookup(root, val);
        return subRoot;
    }
    TreeNode* lookup(TreeNode *root, int target)
    {
      if (root == NULL)
        return NULL;
      if (root->val == target)
        return root;
      if (root->val < target)
        return lookup(root->right, target);
      else
        return lookup(root->left, target);
    }
};
