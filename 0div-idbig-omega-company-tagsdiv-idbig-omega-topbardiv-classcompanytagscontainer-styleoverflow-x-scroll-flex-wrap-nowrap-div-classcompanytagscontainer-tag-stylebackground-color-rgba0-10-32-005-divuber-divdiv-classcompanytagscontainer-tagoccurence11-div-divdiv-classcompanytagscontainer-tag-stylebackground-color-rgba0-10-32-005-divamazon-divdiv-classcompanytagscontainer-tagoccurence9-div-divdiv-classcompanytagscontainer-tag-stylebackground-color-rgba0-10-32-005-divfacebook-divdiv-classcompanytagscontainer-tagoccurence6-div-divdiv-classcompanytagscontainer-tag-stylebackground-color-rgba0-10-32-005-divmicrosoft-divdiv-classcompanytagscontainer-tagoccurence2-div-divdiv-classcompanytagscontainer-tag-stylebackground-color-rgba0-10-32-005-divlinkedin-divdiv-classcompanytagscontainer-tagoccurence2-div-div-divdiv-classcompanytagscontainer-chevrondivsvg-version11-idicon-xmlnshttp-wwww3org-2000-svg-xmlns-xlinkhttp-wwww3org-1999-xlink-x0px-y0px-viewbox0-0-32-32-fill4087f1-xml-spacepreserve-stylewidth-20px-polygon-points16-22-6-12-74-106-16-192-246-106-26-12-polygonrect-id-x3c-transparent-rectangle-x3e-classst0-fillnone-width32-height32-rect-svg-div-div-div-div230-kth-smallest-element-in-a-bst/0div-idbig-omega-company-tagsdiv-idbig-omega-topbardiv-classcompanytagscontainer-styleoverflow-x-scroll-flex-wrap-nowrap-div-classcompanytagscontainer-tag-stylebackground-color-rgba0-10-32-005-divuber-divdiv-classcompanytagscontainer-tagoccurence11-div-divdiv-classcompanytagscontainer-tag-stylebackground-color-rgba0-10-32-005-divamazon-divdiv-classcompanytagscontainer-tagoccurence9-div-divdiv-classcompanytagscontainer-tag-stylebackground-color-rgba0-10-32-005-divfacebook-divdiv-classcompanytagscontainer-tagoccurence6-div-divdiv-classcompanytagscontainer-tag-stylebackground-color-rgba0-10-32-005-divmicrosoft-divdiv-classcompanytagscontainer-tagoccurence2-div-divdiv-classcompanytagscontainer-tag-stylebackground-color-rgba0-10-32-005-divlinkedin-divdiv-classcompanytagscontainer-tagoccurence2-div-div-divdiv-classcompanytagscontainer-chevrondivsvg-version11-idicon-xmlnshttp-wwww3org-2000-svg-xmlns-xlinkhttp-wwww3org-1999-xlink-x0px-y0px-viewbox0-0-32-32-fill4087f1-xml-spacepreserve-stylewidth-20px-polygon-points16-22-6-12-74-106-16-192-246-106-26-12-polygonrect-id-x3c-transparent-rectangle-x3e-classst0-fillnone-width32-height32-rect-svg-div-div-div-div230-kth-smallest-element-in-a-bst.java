/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int c=0,ans=0;
    public int kthSmallest(TreeNode root, int k) {
        dfs(root,k);
        return ans;
    }
    private void dfs(TreeNode root,int k){
        if(root==null || k<c)   return;
        if(root.left!=null)   dfs(root.left,k);
        c+=1;
        if(k==c)    ans=root.val;
        if(root.right!=null)  dfs(root.right,k);
    }
}