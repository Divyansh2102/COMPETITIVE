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
    vector<int>v1,v2;
    void trav1(TreeNode*root){
        if(root==NULL){
            v1.push_back(-1);
            return;
        }
        v1.push_back(root->val);
        trav1(root->left);
        
        trav1(root->right);
    }
    void trav2(TreeNode*root){
        if(root==NULL){
            v2.push_back(-1);
            return;
        }
        v2.push_back(root->val);
        trav2(root->left);
        
        trav2(root->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        trav1(p);
        trav2(q);
        return v1==v2;
    }
};


/*
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(q==NULL && p==NULL)
            return true;
        if(q==NULL || p==NULL)
            return false;
        if(p->val!=q->val)
            return false;
        return (isSameTree(p->left,q->left)&&isSameTree(p->right,q->right));
    }
};
*/