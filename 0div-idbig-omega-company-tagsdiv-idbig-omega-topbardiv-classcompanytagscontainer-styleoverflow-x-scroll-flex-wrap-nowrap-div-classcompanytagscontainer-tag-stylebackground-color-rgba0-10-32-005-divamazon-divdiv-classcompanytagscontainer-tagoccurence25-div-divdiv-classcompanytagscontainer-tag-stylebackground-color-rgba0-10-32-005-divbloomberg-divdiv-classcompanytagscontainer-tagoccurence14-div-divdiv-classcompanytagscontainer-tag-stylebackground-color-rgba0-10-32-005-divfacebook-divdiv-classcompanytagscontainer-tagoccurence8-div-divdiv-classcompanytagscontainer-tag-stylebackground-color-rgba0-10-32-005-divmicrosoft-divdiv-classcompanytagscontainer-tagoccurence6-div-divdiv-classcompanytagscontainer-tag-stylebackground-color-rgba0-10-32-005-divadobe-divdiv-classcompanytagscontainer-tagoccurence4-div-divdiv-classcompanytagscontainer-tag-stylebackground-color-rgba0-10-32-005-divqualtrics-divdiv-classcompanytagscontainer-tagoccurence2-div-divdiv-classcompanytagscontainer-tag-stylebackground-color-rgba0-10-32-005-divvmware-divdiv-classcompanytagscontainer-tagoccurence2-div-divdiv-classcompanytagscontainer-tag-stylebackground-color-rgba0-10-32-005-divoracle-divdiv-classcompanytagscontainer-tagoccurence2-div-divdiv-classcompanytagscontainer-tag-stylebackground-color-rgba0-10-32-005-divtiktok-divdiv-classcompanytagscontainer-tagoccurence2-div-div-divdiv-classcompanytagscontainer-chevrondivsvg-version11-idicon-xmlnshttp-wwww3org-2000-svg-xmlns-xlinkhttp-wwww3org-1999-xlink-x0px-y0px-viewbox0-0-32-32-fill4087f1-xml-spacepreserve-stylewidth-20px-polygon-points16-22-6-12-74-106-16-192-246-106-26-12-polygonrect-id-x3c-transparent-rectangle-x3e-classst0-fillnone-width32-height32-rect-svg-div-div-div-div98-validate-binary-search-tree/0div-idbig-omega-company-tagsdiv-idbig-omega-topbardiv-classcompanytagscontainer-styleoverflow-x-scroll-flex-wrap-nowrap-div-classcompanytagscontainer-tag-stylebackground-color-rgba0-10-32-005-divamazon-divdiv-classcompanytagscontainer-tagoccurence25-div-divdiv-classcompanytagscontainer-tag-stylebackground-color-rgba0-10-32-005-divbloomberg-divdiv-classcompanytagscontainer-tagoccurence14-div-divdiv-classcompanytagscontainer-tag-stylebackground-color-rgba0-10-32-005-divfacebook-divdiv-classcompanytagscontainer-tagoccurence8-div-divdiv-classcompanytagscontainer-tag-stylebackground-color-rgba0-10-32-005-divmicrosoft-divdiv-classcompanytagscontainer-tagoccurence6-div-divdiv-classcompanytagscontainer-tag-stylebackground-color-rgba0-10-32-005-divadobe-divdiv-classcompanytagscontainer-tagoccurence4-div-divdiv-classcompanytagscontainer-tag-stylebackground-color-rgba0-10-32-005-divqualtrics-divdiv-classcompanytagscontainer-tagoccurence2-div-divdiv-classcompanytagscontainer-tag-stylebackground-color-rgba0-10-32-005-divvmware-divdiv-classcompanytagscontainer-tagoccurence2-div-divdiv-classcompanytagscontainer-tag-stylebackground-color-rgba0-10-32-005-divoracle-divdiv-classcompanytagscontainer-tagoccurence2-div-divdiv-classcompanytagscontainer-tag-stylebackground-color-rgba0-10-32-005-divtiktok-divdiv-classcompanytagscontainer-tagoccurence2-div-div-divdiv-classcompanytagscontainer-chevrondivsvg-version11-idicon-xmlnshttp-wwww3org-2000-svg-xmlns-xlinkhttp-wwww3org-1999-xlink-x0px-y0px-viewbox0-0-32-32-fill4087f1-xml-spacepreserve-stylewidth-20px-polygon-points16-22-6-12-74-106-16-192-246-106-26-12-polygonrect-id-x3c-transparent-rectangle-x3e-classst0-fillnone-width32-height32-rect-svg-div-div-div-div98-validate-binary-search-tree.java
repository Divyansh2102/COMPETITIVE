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
    public long val=-999999999999L;
    public boolean isValidBST(TreeNode root) {
        return dfs(root);
    }
    private boolean dfs(TreeNode root){
        if(root==null)  return true;
        if(!dfs(root.left)) return false;
        if(root.val<=val)   return false;
        val=root.val;
        return dfs(root.right);
    }
}