// Following is the given TreeNode structure.
/**************

template <typename T>
class TreeNode {
public:
    T data;
    vector<TreeNode<T>*> children;
    
    TreeNode(T data) {
        this->data = data;
    }
    
    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
    
};
***************/


int sumOfNodes(TreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically. 
     */
    if(root==nullptr)
    {
        return 0;
    }
    int sum=root->data;
    for(int i=0;i<root->children.size();i++)
    {
        sum =sum+sumOfNodes(root->children[i]);
    }
    return sum;
    
    
}

