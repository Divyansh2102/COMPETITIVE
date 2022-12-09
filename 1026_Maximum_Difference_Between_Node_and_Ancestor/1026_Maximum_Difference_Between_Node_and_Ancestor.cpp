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
    int func(TreeNode*root,int cmax,int cmin){
        if(root==NULL){
            return cmax-cmin;
        }
        cmax=max(cmax,root->val);
        cmin=min(cmin,root->val);
        int l=func(root->left,cmax,cmin);
        int r=func(root->right,cmax,cmin);
        return max(l,r);
    }
    int maxAncestorDiff(TreeNode* root) {
        if(root==NULL)
            return 0;
        return func(root,root->val,root->val);
    }
};