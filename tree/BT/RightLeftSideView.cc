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

void print(vector<int> ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

void right(Node *root, int level, vector<int> &ans)
{
    if (root == NULL)
        return;

    if (ans.size() == level)
        ans.push_back(root->data);

    right(root->right, level + 1, ans);
    right(root->left, level + 1, ans);
}

vector<int> rightsideview(Node *root)
{
    vector<int> ans;
    right(root, 0, ans);
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

    cout << "Right Side View : " << endl;
    print(rightsideview(root));

    return 0;
}