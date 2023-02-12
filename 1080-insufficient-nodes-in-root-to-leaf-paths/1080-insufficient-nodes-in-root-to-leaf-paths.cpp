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
    TreeNode* ans(TreeNode*root,int limit,int sum){
        if((!root)) return root;
        if(root->right==NULL && root->left==NULL){
            if(sum+root->val < limit)   return NULL;
            else    return root;
        }
        TreeNode*lft=ans(root->left,limit,sum+root->val);
        TreeNode*rt=ans(root->right,limit,sum+root->val);
        if(lft==NULL)
            root->left=NULL;
        if(rt==NULL)
            root->right=NULL;
        if(lft==NULL && rt==NULL)
            return NULL;
        return root;
    }
    TreeNode* sufficientSubset(TreeNode* root, int limit) {
        return ans(root,limit,0);
    }
};



