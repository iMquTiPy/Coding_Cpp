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

int countLeafNodes(BinaryTreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    if(root==nullptr)
    {
        return 0;
    }
    int count=0;
    if(root->left==nullptr&&root->right==nullptr)
    {
        count++;
    }
    int L=countLeafNodes(root->left);
    int R=countLeafNodes(root->right);
    count=count+ L+R;
    return count;

}
