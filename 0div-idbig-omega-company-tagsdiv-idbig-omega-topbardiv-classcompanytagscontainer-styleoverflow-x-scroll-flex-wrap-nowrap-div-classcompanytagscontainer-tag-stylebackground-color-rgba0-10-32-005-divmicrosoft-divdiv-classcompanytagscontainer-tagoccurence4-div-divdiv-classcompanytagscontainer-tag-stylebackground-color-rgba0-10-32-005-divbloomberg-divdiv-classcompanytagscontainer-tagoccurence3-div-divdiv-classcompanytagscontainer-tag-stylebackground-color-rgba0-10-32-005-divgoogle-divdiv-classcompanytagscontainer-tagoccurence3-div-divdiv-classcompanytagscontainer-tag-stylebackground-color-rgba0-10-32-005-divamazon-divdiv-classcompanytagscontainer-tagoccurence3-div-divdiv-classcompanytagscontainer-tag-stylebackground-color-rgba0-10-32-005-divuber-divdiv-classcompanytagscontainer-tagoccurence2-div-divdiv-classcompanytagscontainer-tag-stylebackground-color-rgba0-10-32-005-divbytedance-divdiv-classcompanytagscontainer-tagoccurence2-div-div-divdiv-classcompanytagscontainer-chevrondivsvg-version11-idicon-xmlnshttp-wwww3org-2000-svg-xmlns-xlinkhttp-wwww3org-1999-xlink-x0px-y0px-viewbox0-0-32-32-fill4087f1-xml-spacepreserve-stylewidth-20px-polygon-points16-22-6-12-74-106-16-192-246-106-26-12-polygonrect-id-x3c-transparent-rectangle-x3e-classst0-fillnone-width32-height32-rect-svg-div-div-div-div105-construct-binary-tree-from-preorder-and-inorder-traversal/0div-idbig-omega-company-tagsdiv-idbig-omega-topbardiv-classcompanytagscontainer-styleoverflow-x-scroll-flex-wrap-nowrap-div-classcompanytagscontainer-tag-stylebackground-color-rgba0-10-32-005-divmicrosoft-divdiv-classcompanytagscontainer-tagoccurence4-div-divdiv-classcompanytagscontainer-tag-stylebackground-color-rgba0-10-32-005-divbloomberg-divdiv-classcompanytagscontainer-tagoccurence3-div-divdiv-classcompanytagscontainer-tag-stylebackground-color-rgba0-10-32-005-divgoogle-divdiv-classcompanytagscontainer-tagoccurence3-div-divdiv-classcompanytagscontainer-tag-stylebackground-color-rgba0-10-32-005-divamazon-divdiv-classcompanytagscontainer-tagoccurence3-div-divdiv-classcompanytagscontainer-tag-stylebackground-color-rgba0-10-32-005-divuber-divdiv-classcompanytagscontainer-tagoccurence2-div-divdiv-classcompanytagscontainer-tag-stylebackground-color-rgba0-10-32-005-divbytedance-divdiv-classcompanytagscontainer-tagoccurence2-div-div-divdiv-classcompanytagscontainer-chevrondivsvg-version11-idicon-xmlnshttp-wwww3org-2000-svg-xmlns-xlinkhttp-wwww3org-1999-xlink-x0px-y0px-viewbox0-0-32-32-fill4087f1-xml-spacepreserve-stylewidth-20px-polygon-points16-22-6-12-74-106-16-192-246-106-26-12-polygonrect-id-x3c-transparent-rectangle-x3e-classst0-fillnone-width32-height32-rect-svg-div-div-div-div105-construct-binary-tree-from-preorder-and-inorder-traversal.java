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
    public int i=0;
    public int p=0;
    public TreeNode buildTree(int[] preorder, int[] inorder) {
        return ans(preorder,inorder,Integer.MIN_VALUE);
    }
    private TreeNode ans(int[] preorder,int[] inorder,int stop){
        if(p>=preorder.length)  return null;
        if(stop==inorder[i]){
            i+=1;
            return null;
        }
        TreeNode node=new TreeNode(preorder[p++]);
        node.left=ans(preorder,inorder,node.val);
        node.right=ans(preorder,inorder,stop);
        return node;
    }
}