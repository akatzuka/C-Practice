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
    int maxDepth(TreeNode* root)
    {
        int depth = 0;
        int maxd = 0;
        if(root)
        {
            lookup(root, depth + 1, maxd);
        }
        return maxd;
    }
    void lookup(TreeNode* root, int depth, int &maxd)
    {
        if(root)
        {
            maxd = max(depth, maxd);
            lookup(root->left, depth+1, maxd);
            lookup(root->right, depth+1, maxd);
        }
    }
};
