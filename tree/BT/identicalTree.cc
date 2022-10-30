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

bool isSameTree(Node *p, Node *q)
{
    if (p == NULL || q == NULL)
        return (p == q);

    return (p->data == q->data) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

int main()
{
    struct Node *root1 = new Node(1);

    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);
    root1->right->left = new Node(6);
    root1->right->right = new Node(7);
    root1->left->right->left = new Node(8);
    root1->right->right->left = new Node(9);
    root1->right->right->right = new Node(10);

    struct Node *root2 = new Node(1);

    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->left = new Node(4);
    root2->left->right = new Node(5);
    root2->right->left = new Node(6);
    root2->right->right = new Node(7);
    root2->left->right->left = new Node(8);
    root2->right->right->left = new Node(9);
    root2->right->right->right = new Node(8);

    cout << "is same tree : ";
    cout << isSameTree(root1, root2);
    cout << endl;

    return 0;
}