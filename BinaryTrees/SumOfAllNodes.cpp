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

int getSum(BinaryTreeNode<int>* root) 
{
   if(root==nullptr)
       return 0;
    int sum=root->data;
    if(root->left!=nullptr or root->right!=nullptr)
    {  
    sum=sum+ getSum(root->left)+getSum(root->right);
    }
    return sum;
}
