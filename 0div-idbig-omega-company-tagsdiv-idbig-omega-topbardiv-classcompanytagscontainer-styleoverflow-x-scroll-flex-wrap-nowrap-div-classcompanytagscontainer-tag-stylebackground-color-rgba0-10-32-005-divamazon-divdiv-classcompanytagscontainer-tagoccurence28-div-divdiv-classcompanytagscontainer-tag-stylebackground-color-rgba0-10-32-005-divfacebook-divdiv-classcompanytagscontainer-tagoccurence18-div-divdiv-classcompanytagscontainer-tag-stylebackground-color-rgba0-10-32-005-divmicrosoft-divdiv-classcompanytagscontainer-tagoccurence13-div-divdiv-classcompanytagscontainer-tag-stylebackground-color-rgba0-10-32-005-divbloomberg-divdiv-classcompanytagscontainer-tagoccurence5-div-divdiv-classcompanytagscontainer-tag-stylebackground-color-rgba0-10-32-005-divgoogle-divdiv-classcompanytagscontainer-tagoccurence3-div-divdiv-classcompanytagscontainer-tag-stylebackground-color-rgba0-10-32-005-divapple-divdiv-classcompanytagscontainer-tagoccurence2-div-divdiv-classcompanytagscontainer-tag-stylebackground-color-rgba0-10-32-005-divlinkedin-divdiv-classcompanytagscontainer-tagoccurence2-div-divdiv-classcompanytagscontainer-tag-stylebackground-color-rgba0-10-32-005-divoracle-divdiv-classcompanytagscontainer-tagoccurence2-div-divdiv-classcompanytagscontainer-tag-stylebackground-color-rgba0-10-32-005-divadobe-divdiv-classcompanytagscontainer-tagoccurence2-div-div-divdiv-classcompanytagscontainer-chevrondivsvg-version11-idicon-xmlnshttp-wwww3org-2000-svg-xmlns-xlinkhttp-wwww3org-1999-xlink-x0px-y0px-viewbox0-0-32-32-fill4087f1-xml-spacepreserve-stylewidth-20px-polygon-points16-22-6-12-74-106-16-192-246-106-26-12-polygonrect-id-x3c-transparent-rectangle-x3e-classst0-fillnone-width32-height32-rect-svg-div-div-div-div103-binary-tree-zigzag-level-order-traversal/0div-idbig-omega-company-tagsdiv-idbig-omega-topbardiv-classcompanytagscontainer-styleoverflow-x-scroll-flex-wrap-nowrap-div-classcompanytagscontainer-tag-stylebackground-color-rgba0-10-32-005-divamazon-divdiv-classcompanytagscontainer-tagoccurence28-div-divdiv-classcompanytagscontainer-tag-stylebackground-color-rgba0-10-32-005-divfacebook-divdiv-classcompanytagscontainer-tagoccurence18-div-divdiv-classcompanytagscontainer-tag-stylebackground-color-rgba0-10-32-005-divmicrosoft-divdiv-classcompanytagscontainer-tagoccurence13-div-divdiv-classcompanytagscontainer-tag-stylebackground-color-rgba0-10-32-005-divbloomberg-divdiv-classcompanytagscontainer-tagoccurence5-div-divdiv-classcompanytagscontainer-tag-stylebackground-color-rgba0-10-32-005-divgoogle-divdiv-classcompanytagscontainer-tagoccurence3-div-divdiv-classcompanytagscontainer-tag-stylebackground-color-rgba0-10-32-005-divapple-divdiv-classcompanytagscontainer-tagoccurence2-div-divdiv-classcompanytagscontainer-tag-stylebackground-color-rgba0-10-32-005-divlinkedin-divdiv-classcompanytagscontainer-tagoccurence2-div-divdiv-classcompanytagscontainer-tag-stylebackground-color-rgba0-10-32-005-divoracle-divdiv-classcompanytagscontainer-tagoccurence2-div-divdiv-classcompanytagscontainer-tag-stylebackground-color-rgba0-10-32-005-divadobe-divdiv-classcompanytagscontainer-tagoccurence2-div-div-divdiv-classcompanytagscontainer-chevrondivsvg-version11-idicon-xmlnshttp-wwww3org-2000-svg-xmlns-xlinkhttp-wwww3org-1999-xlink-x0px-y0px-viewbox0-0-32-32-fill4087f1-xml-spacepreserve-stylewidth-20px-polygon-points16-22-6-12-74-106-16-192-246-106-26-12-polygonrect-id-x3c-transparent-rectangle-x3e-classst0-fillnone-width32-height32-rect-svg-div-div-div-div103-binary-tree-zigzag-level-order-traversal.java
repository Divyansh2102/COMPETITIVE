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
    public List<List<Integer>>ans=new ArrayList<>();
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        if(root==null)  return ans;
        bfs(root);
        return ans;
    }
    private void bfs(TreeNode root){
        Queue<TreeNode>q=new LinkedList<>();
        q.add(root);
        boolean r=true;
        while(!q.isEmpty()){
            List<Integer>temp=new ArrayList<>();
            int s=q.size();
            for(int i=0;i<s;i++){
                TreeNode f=q.poll();
                if(r){
                    temp.add(f.val);
                }
                else    temp.add(0,f.val);
                if (f.left != null) {
                    q.add(f.left);
                }
                if (f.right != null) {
                    q.add(f.right);
                }
            }
            ans.add(temp);
            r=!r;
        }
    }
}