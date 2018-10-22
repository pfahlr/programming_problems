int maxT(Node* root);
int minT(Node* root);
bool isBST(Node* root) {
    if(!root) return true;
    if(root->left) {
        int max = maxT(root->left);
        if(max > root->data || max == -1) return false;
    }  
    if(root->right){
        int min = minT(root->right);
        if(min < root->data || min == -1) return false;
    }
    return true; 
}

int maxT(Node* root) {
  if(root->left) {
      int max = maxT(root->left);
      if(max > root->data) return -1;
      return max;
  }
  if(root->right) {
      int max = maxT(root->right); 
      if(max > root->data) return max;
      return -1;
  }
  return root->data;
}

int minT(Node* root) {
  if(root->left) {
     int min = minT(root->left);
     if(min <= root->data) return min;
     return -1;
  }
  if(root->right) {
     int min = minT(root->right);
     if(min < root->data) return -1;
     else return min;
  }
  return root->data;
}

