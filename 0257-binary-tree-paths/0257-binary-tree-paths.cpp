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
    void check(TreeNode*root,vector<string>&st,string c){
        if(!root->left && !root->right) st.push_back(c+to_string(root->val));
        else{
            if(root->left)  check(root->left,st,c+to_string(root->val)+"->");
            if(root->right) check(root->right,st,c+to_string(root->val)+"->");
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>st;
        if(root)  check(root,st,"");
        return st;
    }
};