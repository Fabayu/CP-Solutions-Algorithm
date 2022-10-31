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
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>>ans=new ArrayList<>();
        
        if(root==null)
            return ans;
        Queue<TreeNode>q=new LinkedList<TreeNode>();
        q.offer(root);
        int index=0;
        while(!q.isEmpty()){
             int level=q.size();
            ArrayList<Integer>al=new ArrayList<Integer>();
            for(int i=0;i<level;i++){
                TreeNode temp=q.poll();
                if(temp.left!=null)q.offer(temp.left);
                if(temp.right!=null)q.offer(temp.right);
                if(index%2==0)
                al.add(temp.val);
                else
                    al.add(0,temp.val);
            }
            index++;
            ans.add(al);
        }
        return ans;
    }
}