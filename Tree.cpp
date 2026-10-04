#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;
Node *buildtree(int pre[])
{
    idx++;

    if (pre[idx] == -1)
    {
        return NULL;
    }

    Node *root = new Node(pre[idx]);
    root->left = buildtree(pre);
    root->right = buildtree(pre);
    return root;
}
// preorder traversal
void preOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
// InOrder Traversal
void InOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
}
// PostOrder Traversal
void PostOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}

// Level Order Traversal
void LevelOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();

        cout << curr->data << " ";
        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
}

int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node *root = buildtree(preorder.data());
    cout << "PreOrder Traversal ";
    preOrder(root);
    cout << endl;

    cout << "InOrder Traversal ";
    InOrder(root);
    cout << endl;

    cout << "PostOrder Traversal ";
    PostOrder(root);
    cout << endl;

    cout << "Level Order Traversal ";
    LevelOrder(root);
    cout << endl;
    return 0;
}