class Solution {
public:
    void check(TreeNode*root,int &ans,long long  temp){
        if(root==NULL)  return;
        if(root->left==NULL && root->right==NULL){
            temp=temp*10+root->val;
            ans+=temp;
        }
        temp=temp*10+root->val;
        check(root->left,ans,temp);
        check(root->right,ans,temp);
    }
    int sumNumbers(TreeNode* root) {
        if(root==NULL)  return 0;
        int ans=0;
        check(root,ans,0);
        return ans;
    }
};