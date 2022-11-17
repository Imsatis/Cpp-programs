#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;
    
    node(int val) {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

class binaryTree {
    public:
    int idx = -1;
    
    node* buildtree(int nodeVal[]) {
        idx++;
        
        if(nodeVal[idx] == -1) {
            return NULL;
        }
        
        node* n = new node(nodeVal[idx]);
        n->left = buildtree(nodeVal);
        n->right = buildtree(nodeVal);

        return n;
    }
    
    void showTree(node* root) {
      if(!root) {
          return;
      }
        
        cout<<" -> "<<root->data;
        showTree(root->left);
        showTree(root->right);
        return;
    }
    
};

int main()
{
    
    // binaryTree* tree = new binaryTree();
    binaryTree tree;
    int nodes[] = {10, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    node* root = tree.buildtree(nodes);
    // cout<<root->data;
    tree.showTree(root);
    return 0;
}
