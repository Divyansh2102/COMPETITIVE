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
    int maxDepth(TreeNode* root) {
        if(root==NULL)  return 0;
        int ans=1;
        stack<pair<TreeNode*,int>>st;
        st.push({root,1});
        while(!st.empty()){
            auto [front,cnt]=st.top();
            st.pop();
            ans=max(ans,cnt);
            if(front->left) st.push({front->left,cnt+1});
            if(front->right) st.push({front->right,cnt+1});
        }
        return ans;
    }
};