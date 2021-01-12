/**********************************************************
	Following is the Binary Tree Node class structure

	template <typename T>
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

***********************************************************/

void mirrorBinaryTree(BinaryTreeNode<int>* root) {
     if(root==nullptr)
    return;
    BinaryTreeNode<int>* temp;
    temp=root->right;
    root->right=root->left;
    root->left=temp;
    mirrorBinaryTree(root->left);
        mirrorBinaryTree(root->right);
    return;
    // Write your code here
}
