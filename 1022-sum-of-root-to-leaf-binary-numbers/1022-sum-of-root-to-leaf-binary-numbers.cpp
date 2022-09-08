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
    int sum=0;
    void check(TreeNode*root,int n){
        if(root!=NULL){
            n=n<<1 | root->val;
            if(root->left==NULL && root->right==NULL)
                sum+=n;
            check(root->left,n);
            check(root->right,n);
        }
    }
    int sumRootToLeaf(TreeNode* root) {
        check(root,0);
        return sum;
    }
};