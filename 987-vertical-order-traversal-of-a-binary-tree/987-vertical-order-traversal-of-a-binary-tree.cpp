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
    map<int,map<int,multiset<int>>>mp;
    void solve(TreeNode*v,int col,int row){
        if(!v)
            return;
        mp[col][row].insert(v->val);
        solve(v->left,col-1,row+1);
        solve(v->right,col+1,row+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        solve(root,0,0);
        vector<vector<int>>ans;
        for(auto m1:mp){
            ans.push_back(vector<int>());
            for(auto m2:m1.second){
                for(auto m3:m2.second){
                    ans.back().push_back(m3);
                }
            }
        }
        return ans;
    }
};