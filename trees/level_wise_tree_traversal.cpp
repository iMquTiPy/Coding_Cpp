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
#include<queue>

void printLevelWise(TreeNode<int>* root) {
  if(root == nullptr) {
    return;
  }
  queue<TreeNode<int>*> printQ;
  printQ.push(root);
  while(!printQ.empty()) {
    TreeNode<int>* top = printQ.front();
    printQ.pop();
    //Printing
    cout << top -> data << ':';
    int childSize = top -> children.size();
    for(int i = 0; i < childSize; i++) {
      cout << top -> children[i] -> data;
      if(i != childSize - 1) {
        cout << ',';
      }
      printQ.push(top -> children[i]);
    }
    cout <<  endl;

  }

}
  


