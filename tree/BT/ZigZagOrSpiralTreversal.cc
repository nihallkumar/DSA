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

void printarray(vector<vector<int>> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}

vector<vector<int>> ZigZag(Node *root)
{
    vector<vector<int>> result;
    if (root == NULL)
        return result;

    queue<Node *> q;
    q.push(root);
    bool LeftToRight = true;

    while (!q.empty())
    {
        int size = q.size();
        vector<int> row(size);
        for (int i = 0; i < size; i++)
        {
            Node *node = q.front();
            q.pop();

            int index = (LeftToRight) ? i : (size - 1 - i);

            row[index] = node->data;
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        LeftToRight = !LeftToRight;
        result.push_back(row);
    }
    return result;
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

    cout << "ZigZag || Spiral Traversal : " << endl;
    printarray(ZigZag(root1));
    cout << endl;

    return 0;
}