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
    public List<Integer> ans=new ArrayList<>();
    public int kthSmallest(TreeNode root, int k) {
        inorder(root);
        return ans.get(k-1);
    }
    private void inorder(TreeNode root){
        if(root==null)  return;
        if(root.left!=null)   inorder(root.left);
        ans.add(root.val);
        if(root.right!=null)    inorder(root.right);
    }
}