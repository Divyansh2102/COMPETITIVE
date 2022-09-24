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
    long long int c=0;
    vector<int>a;
    void sol(TreeNode*root,long long int cur,int t){
        if(!root)
            return;
        a.push_back(root->val);
        long long int cs=cur+root->val;
        long long int ts=0;
        for(int i=0;i<a.size();i++){
            if(cs-ts==t)
                c++;
            ts+=a[i];
        }
        if(root->left)
            sol(root->left,cur+root->val,t);
        if(root->right)
            sol(root->right,cur+root->val,t);
        a.pop_back();
        
    }
    int pathSum(TreeNode* root, int t) {
        sol(root,0,t);
        return c;
    }
};