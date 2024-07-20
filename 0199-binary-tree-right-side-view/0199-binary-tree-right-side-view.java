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
    public List<Integer> rightSideView(TreeNode root) {
        List<Integer>ans=new ArrayList<>();
        if(root==null)  return ans;
        Map<Integer,Integer>mp=new HashMap();
        sol(root,0,mp);
        for(int i=0;i<mp.size();i++)    ans.add(mp.get(i));
        return ans;
    }
    private void sol(TreeNode root,int lev,Map<Integer,Integer>mp){
        if(root==null)  return;
        if(!mp.containsKey(lev))
            mp.put(lev, root.val);
        sol(root.right,lev+1,mp);
        sol(root.left,lev+1,mp);
    }
}