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
    TreeNode*check(vector<int>&in,int is,int ie,vector<int>&pos,int ps,int pe,unordered_map<int,int>&mp){
        if(is>ie || ps>pe)  return NULL;
        TreeNode*root=new TreeNode(pos[pe]);
        int inR=mp[pos[pe]];
        int rem=inR-is;
        root->left=check(in,is,inR-1,pos,ps,ps+rem-1,mp);
        root->right=check(in,inR+1,ie,pos,ps+rem,pe-1,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size()!=postorder.size())    return NULL;
        unordered_map<int,int>mp;
        for(int i=0;i<inorder.size();++i)   mp[inorder[i]]=i;
        return check(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,mp);
    }
};