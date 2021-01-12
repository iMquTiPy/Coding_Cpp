// Following is the Tree node structure
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

bool isIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    if(root1==nullptr&& root2==nullptr)
    {
        return true;
    }
    if((root1==nullptr && root2!=nullptr) ||(root1!=nullptr && root2==nullptr))
    {
        return false;
    }
    if(root1->data!=root2->data)
    {
        return false;
    }
    bool ans=true;
    for(int i=0;i<root1->children.size();i++)
    {
        ans=isIdentical(root1->children[i],root2->children[i]);
    }
    return ans;
    

}
