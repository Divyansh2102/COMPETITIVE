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
    int m=1e9+7;
    void func(TreeNode*root,long long int &sum){
        if(root==NULL)
            return ;
        sum+=root->val;
        func(root->left,sum);
        func(root->right,sum);
    }
    long long ans=0;
    long long int traverse(TreeNode*root,long long int sum){
        if(root==NULL)
            return 0;
        long long int l,r;
        l=r=0;
        if(root->left)
            l=traverse(root->left,sum);
        if(root->right)
            r=traverse(root->right,sum);
        long long csum=l+r+root->val;
        ans=max(ans,((sum-csum)*csum));
        return csum;
    }
    int maxProduct(TreeNode* root) {
        long long int sum=0;
        func(root,sum);
        traverse(root,sum);
        return ans%m;
    }
};