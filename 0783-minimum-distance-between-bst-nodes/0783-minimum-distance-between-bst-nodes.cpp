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
    int ans=INT_MAX;
    int prev=INT_MAX;
    void func(TreeNode*root){
        if(root==NULL)  return;
        func(root->left);
        if(prev!=INT_MAX){
            ans=min(root->val-prev,ans);
        }
        prev=root->val;
        func(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        if(root==NULL)  return NULL;
        func(root);
        return ans;
    }
};