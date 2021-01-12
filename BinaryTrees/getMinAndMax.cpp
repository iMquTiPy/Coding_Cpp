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

/*
	The first value of the pair must be the minimum value in the tree and 
	the second value of the pair must be the maximum value in the tree
*/
#include<climits>
#include<utility>

pair<int,int> getMinAndMax(BinaryTreeNode<int> *root) {
	// Write your code here
if(root==nullptr)
{
    pair<int,int> ans;
    ans.first=INT_MAX;
    ans.second=INT_MIN;
    return ans;
}
    pair <int,int>sol;
    sol.first=root->data;
    sol.second=root->data;
    
    pair <int,int>l=getMinAndMax(root->left);
	pair <int,int>r=getMinAndMax(root->right);
    
    if(sol.first>l.first)
    {
        sol.first=l.first;
    }
    if(sol.first>r.first)
    {
        sol.first=r.first;
    }    
     if(sol.second<l.second)
    {
        sol.second=l.second;
    } if(sol.second<r.second)
    {
        sol.second=r.second;
    }
    return sol;
    

    


}








