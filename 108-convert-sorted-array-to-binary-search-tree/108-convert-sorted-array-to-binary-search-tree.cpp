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
    TreeNode* convert(vector<int>&arr, int left,int right){  
        if (left>right)
            return NULL; 
        int mid = (left +right)/2;
        
        TreeNode *temp=new TreeNode (arr[mid]);
        temp->left= convert(arr,left,mid-1);
        temp->right=convert(arr,mid+1,right);
        return temp;
        
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return convert(nums,0,nums.size()-1);
    }
};
