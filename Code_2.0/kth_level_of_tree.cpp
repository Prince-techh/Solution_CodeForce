
#include <iostream>
#include <vector>
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

    if (pre[idx] == -1) {
        return NULL;
    }

    Node* root = new Node(pre[idx]);

    root->left = buildtree(pre);
    root->right = buildtree(pre);

    return root;
}

void printKthLevel(Node* root, int k) {
    if (root == NULL) {
        return;
    }

    if (k == 1) {
        cout << root->data << " ";
        return;
    }

    printKthLevel(root->left, k - 1);
    printKthLevel(root->right, k - 1);
}

int main() {
    vector<int> preorder = {
        1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1
    };

    Node* root = buildtree(preorder.data());

    printKthLevel(root, 3);

    return 0;
}