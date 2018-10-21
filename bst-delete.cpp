/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The structure of a BST Node is as follows:
struct Node {
  int data;
  Node * right, * left;
}; */
int maximum(Node *root);
Node * deleteNode(Node *root,  int x)
{
  // your code goes here
  if(root->data == x) {
    if(!root->left && !root->right) {
      //delete root; 
      return NULL;
    }
    else if(!root->left) {
      return root->right;
    }
    else if(!root->right) {
      return root->left;
    }
    else {
      int predecessor = maximum(root->left);
      root->data = predecessor;
      root->left = deleteNode(root->left, predecessor);
    }
  }
  if(root->left && x < root->data) root->left = deleteNode(root->left, x);
  if(root->right && x > root->data) root->right = deleteNode(root->right, x);
  return root;
}

int maximum(Node *root) {
   if(!root->right) return root->data;
   else return maximum(root->right);
}

