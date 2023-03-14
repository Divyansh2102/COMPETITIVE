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
    void check(TreeNode*root,int &ans,int temp){
        if(root->left==NULL && root->right==NULL){
            temp=temp*10+root->val;
            ans+=temp;
            return;
        }
        temp=temp*10+root->val;
        if(root->left)  check(root->left,ans,temp);
        if(root->right) check(root->right,ans,temp);
    }
    int sumNumbers(TreeNode* root) {
        if(root==NULL)  return 0;
        int ans=0;
        check(root,ans,0);
        return ans;
    }
};