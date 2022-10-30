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

int maxwidth(Node *root)
{
    if (root == NULL)
        return 0;

    int ans = 0;
    queue<pair<Node *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        int size = q.size();
        int mmin = q.front().second;
        int first, last;

        for (int i = 0; i < size; i++)
        {
            int curr = q.front().second - mmin;
            Node *node = q.front().first;
            q.pop();

            if (i == 0)
                first = curr;
            if (i == size - 1)
                last = curr;

            if (node->left)
                q.push({node->left, curr * 2 + 1});
            if (node->right)
                q.push({node->right, curr * 2 + 2});
        }
        ans = max(ans, last - first + 1);
    }
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

    cout << "Max Width : ";
    int ans = maxwidth(root);
    cout << ans;

    return 0;
}