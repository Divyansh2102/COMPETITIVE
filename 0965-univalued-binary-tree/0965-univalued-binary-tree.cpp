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
    void check(TreeNode*root,int data,bool &flag){
        if(root==NULL)  return;
        if(root->val!=data) flag=false;
        check(root->left,data,flag);
        check(root->right,data,flag);
    }
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL)  return 1;
        bool flag=1;
        int data=root->val;
        check(root,data,flag);
        return flag;
    }
};