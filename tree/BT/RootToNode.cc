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

bool getpath(Node *root, vector<int> &ans, int x)
{
    if (!root)
        return false;

    ans.push_back(root->data);

    if (root->data == x)
        return true;

    if (getpath(root->left, ans, x) || getpath(root->right, ans, x))
        return true;

    ans.pop_back();
    return false;
}

vector<int> roottonode(Node *root, int x)
{
    vector<int> ans;
    if (!root)
        return ans;

    getpath(root, ans, x);
    return ans;
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
    root->left->right->right = new Node(9);

    cout << "Root To Node : ";
    printarray(roottonode(root, 9));

    return 0;
}