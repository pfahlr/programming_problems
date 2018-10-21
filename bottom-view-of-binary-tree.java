class GfG
{
    // Should print bottom view of tree with given root
    public  HashMap<Integer, Integer> map = new HashMap();
            
    public void bottomView(Node root)
    {
    map.clear();
    if(root != null) bottomViewRec(root, 0);
    //ikr, probably should implement better data structure
    for(int i = -100; i < 100; i++){
        if(map.get(i) != null) System.out.print(map.get(i)+" ");
      }
    }
    
    public void bottomViewRec(Node root, int horiz)
    {
        if(root.right != null) bottomViewRec(root.right, horiz+1);
        if(root.left != null) bottomViewRec(root.left, horiz-1);
          if(map.get(horiz) == null) {
            map.put(horiz, root.data);
          }      
    }
}
