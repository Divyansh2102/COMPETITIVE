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
    public boolean hasPathSum(TreeNode root, int targetSum) {
        return ans(root,targetSum);
    }
    private boolean ans(TreeNode r,int s){
        if(r==null) return false;
        s-=r.val;
        if(r.left==null && r.right==null && s==0)   return true;
        return ans(r.left,s) || ans(r.right,s);
    }
}