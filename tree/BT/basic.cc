#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

void preOrder(struct Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";

    preOrder(root->left);

    preOrder(root->right);
}

void inOrder(struct Node *root)
{
    if (root == NULL)
        return;

    inOrder(root->left);

    cout << root->data << " ";

    inOrder(root->right);
}

void postOrder(struct Node *root)
{
    if (root == NULL)
        return;

    postOrder(root->left);

    postOrder(root->right);

    cout << root->data << " ";
}

int main()
{
    struct Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->right->left = new Node(8);
    root->right->right->left = new Node(9);
    root->right->right->right = new Node(10);

    cout << "preOrder : ";
    preOrder(root);
    cout << endl;

    cout << "inOrder : ";
    inOrder(root);
    cout << endl;

    cout << "postOrder : ";
    postOrder(root);
    cout << endl;

    return 0;
}