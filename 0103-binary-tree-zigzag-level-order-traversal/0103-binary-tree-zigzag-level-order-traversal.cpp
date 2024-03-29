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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)  return ans;
        queue<TreeNode*>q;
        q.push(root);
        int flag=0;
        while(q.size()){
            int n=q.size();
            vector<int>temp;
            for(int i=0;i<n;i++){
                TreeNode* x=q.front();
                q.pop();
                if(x->left)q.push(x->left);
                if(x->right)q.push(x->right);
                temp.push_back(x->val);
            }
            if(flag==0) flag=1;
            else {
                reverse(temp.begin(),temp.end());
                flag=0;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};