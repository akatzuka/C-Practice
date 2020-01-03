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
    int rangeSumBST(TreeNode* root, int L, int R) {
        int sum = 0;
        preOrderP(root, sum, L, R);
        return sum;
    }
    void preOrderP(TreeNode* root, int &sum, int L, int R) {
        if (root)
        {
            if(root->val >= L && root->val <= R)
            {
                sum = sum + root->val;
            }
            preOrderP(root->left, sum, L, R);
            preOrderP(root->right, sum, L, R);
        }
    }
};
