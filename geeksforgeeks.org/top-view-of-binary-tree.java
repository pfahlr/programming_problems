class GfG
{
    public  HashMap<Integer, Integer> map = new HashMap();
    public void printTopView(TreeNode root)
    {
      map.clear();
      if(root == null) return; // topViewRec(root, 0);
      
      int depth = getDepth(root);
      for(int i = 0; i < depth; i++) {
        traverseLevel(root, i, 0);
      }
    }

    public void traverseLevel(TreeNode root, int level, int horiz) 
    {
      if(level == 0) {
        if(map.get(horiz) == null) {
          System.out.print(root.key + " ");
          map.put(horiz, root.key);
        }
      }
      else {
        if(root.left != null) traverseLevel(root.left, level-1, horiz-1);
        if(root.right != null) traverseLevel(root.right, level-1, horiz+1);
      }
    }
    
    public int getDepth(TreeNode root) 
    {
      int rightDepth = 0, leftDepth = 0;
      if(root.left != null) leftDepth = getDepth(root.left);
      if(root.right != null) rightDepth = getDepth(root.right);
      return 1 + ((rightDepth > leftDepth) ? rightDepth:leftDepth);
    }
}
