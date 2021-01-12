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

BinaryTreeNode<int>* maxDataNode(BinaryTreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    if(root==nullptr)
    {
	return nullptr;
    }
    BinaryTreeNode<int>* max=root;
    BinaryTreeNode<int>* maxL=maxDataNode(max->left);
    BinaryTreeNode<int>* maxR=maxDataNode(max->right);
    if(maxR!=nullptr)
    {
    if(maxR->data>max->data)
     {
        max=maxR;
     }
    }
    if(maxL!=nullptr){
    if(maxL->data>max->data)
    {
        max=maxL;
    }
    }
    return max;


}
