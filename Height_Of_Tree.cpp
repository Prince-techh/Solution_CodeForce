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
Node* buildTree(int pre[]) {
    idx++;

    Node* root = new Node(pre[idx]);
    if(pre[idx] == -1) {
        return NULL;
    }
    root->left = buildTree(pre);
    root->right = buildTree(pre);

    return root;
}

int height(Node* root) {
    if(root==NULL) {
        return 0;
    }
    int leftHt = height(root->left);
    int rightHt = height(root->right);

    return max(leftHt,rightHt)+1;
}

int main () {
    vector<int> pre = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(pre.data());

    cout << "Height of the tree is: " << height(root) << endl;

    return 0;
}