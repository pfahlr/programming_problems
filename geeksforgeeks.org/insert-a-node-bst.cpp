/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The structure of a BST node is as follows:
struct node {
  int data;
  struct node * right, * left;
}; */
/* This function should insert a new node with given data and
   return root of the modified tree  */
struct node* insert(struct node* node, int data)
{
    // Your code here
    if(!node) node = newNode(data);
    else if(node->data < data) {
        if(!node->right)
            node->right = newNode(data);
        else insert(node->right, data);
    }
    else if(data < node->data) {
        if(!node->left)
            node->left = newNode(data);
        else insert(node->left, data);
            
    }
    return node;
}
