#include<iostream>
#include<vector> 
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;
Node* buildtree(int pre[]) {
    idx++;

    if(pre[idx]==-1) {
        return NULL;
    }

    Node* root = new Node(pre[idx]);
    root->left = buildtree(pre);
    root->right = buildtree(pre);
    return root;
}
//preorder traversal
void preOrder(Node* root) {
    if(root == NULL) {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
//InOrder Traversal
void InOrder(Node* root) {
    if(root == NULL) {
        return;
    }
    InOrder(root->left);
    cout << root->data <<endl;
    InOrder(root->right);
}

int main() {
    vector<int> preorder ={1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildtree(preorder.data());
    cout << "PreOrder Traversal" <<endl; 
    preOrder(root);

    cout << "InOrder Traversal" <<endl;
    InOrder(root);
    return 0;
}