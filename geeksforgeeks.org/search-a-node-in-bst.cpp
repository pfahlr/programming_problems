/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Node structure 
struct node {
    int data;
   struct node * right, * left;
};*/
/*You are required to complete this method*/
bool search(node* root, int x)
{
    //Your code here
    if(root->data == x)
        return 1;
    else if(x < root->data && root->left)
        return search(root->left, x);
    else if(root->data < x && root->right) return search(root->right, x);
    else return 0;
    
}
