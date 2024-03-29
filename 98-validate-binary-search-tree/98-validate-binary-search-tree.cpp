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
bool isBST(TreeNode* root, long &prev)
    {
        if(root==NULL)
            return true;
        bool left=isBST(root->left, prev);
        if(root->val <= prev)
            return false;
        prev=root->val;
        bool right=isBST(root->right, prev);
        return left && right;
    }
    bool isValidBST(TreeNode* root) {
        long prev=-999999999999;
        return isBST(root, prev); 
    }
};