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
    vector<int> rightSideView(TreeNode* root) {
        TreeNode *temp=root;
        vector<int>v;
        if(root==NULL)
            return {};
        list<TreeNode*>q;
        q.push_back(root);
        TreeNode *cur=nullptr;
        while(!q.empty()){
            int size=q.size();
            int i=0;
            while(i++<size){
                cur=q.front();
                q.pop_front();
                if(i==size)
                    v.push_back(cur->val);
                if(cur->left)
                    q.push_back(cur->left);
                if(cur->right)
                    q.push_back(cur->right);
            }
        }
        return v;
    }
};