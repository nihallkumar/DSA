#include <bits/stdc++.h>
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

void printarray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

void LeftTree(Node *root, vector<int> &ans)
{
    if (root == NULL)
        return;

    if (root->left)
    {
        ans.push_back(root->data);
        LeftTree(root->left, ans);
    }
    else if (root->right)
    {
        ans.push_back(root->data);
        LeftTree(root->right, ans);
    }
}

void Leaf(Node *root, vector<int> &ans)
{
    if (!root)
        return;

    Leaf(root->left, ans);

    if (!root->left and !root->right)
        ans.push_back(root->data);

    Leaf(root->right, ans);
}

void RightTree(Node *root, vector<int> &ans)
{
    if (!root)
        return;

    if (root->right)
    {
        RightTree(root->right, ans);
        ans.push_back(root->data);
    }
    else if (root->left)
    {
        RightTree(root->left, ans);
        ans.push_back(root->data);
    }
}

vector<int> boundary(Node *root)
{
    vector<int> ans;
    ans.push_back(root->data);
    LeftTree(root->left, ans);
    Leaf(root, ans);
    RightTree(root->right, ans);

    return ans;
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

    cout << "Boundary Traversal : " << endl;
    printarray(boundary(root1));
    cout << endl;

    return 0;
}