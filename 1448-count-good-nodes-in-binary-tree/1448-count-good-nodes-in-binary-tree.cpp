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
    int goodNodes(TreeNode* root) {
        int count=0;
        if(root==NULL)
            return count;
        good(root,count,root->val);
        return count;
    }
    void good(TreeNode*root,int &count,int maxV){
        if(root==NULL)
            return;
        if(root->val>=maxV){
            count++;
            maxV=root->val;
        }
        good(root->left,count,maxV);
        good(root->right,count,maxV);
    }
};