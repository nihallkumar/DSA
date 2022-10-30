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

int maxDown(Node *node, int &maxi)
{
    if (node == NULL)
        return 0;

    int lh = max(0, maxDown(node->left, maxi));
    int rh = max(0, maxDown(node->right, maxi));

    maxi = max(maxi, lh + rh + node->data);

    return max(lh, rh) + node->data;
}

int maxSum(Node *root)
{
    int maxi = 0;
    maxDown(root, maxi);
    return maxi;
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

    cout << "Max Path Sum : ";
    cout << maxSum(root);
    cout << endl;

    return 0;
}