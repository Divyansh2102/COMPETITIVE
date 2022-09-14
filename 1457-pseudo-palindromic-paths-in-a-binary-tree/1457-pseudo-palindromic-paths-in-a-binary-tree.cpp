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
    void check_count(TreeNode*root,vector<int>&v,int &c){
        if(root==NULL)
            return;
        v[root->val]++;
        check_count(root->left,v,c);
        check_count(root->right,v,c);
        if(root->left==0 && root->right==0){
            int flag=0;
            for(int i=1;i<=9;i++){
                if(v[i]%2!=0)
                    flag++;
            }
            if(flag<=1)
                c++;
        }
        v[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        int c=0;
        vector<int>v(10,0);
        check_count(root,v,c);
        return c;
    }
};