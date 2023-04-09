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
    
    int ht(TreeNode*root,int &maxi){
        if(root==NULL)  return 0;
        int lf=ht(root->left,maxi);
        int rt=ht(root->right,maxi);
        maxi=max(maxi,lf+rt);
        return 1+max(lf,rt);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)  return 0;
        int maxi=INT_MIN;
        ht(root,maxi);
        return maxi;
    }
};