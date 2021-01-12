// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
***************/
int height(BinaryTreeNode<int>* root) {

  if(root==nullptr)
    return 0;
  
  return max<int>(height(root->left),height(root->right))+1;
}

int diameter(BinaryTreeNode<int>* root) {

  if(root==nullptr)
    return 0;
  int diaLeft = diameter(root->left);
  int diaRight = diameter(root->right);
  int htLeft = height(root->left);
  int htRight = height(root->right);
  int option = 1+htLeft+htRight;
  
  return max<int>(max<int>(diaLeft,diaRight),option);

}
