/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;
        if(root==NULL)
            return ans;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>ans1;
            for(int i=q.size()-1; i>=0; --i){
                Node* curr = q.front();
                q.pop();
                ans1.push_back(curr->val);
                for(int i=0; i<curr->children.size(); ++i){
                    q.push(curr->children[i]);
                }
            }
            ans.push_back(ans1);
        }
        return ans;
    }
};