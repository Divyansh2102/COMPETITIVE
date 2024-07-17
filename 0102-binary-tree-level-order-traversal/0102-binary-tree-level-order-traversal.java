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
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>>ans=new ArrayList<>();
        if(root==null)  return ans;
        Queue<TreeNode>q=new LinkedList<>();
        q.add(root);
        while(!q.isEmpty()){
            int sz=q.size();
            List<Integer>temp=new ArrayList<>();
            for (int i=0;i<sz;i++) {
                TreeNode fr = q.poll();
                temp.add(fr.val);
                if (fr.left != null) q.add(fr.left);
                if (fr.right != null) q.add(fr.right);
            }
            ans.add(temp);
        }
        return ans;
    }
}