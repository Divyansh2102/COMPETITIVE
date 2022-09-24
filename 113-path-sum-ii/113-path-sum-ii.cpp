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
    vector<vector<int>>ans;
    vector<int>a;
    void sol(TreeNode*root,int cur,int t){
        if(!root)
            return;
        cur+=root->val;
        a.push_back(root->val);
        if(cur==t && !root->left && !root->right)
            ans.push_back(a);
        sol(root->left,cur,t);
        sol(root->right,cur,t);
        a.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        sol(root,0,targetSum);
        return ans;
    }
};