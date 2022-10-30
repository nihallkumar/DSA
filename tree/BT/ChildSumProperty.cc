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
        cout << endl;
    }
    cout << endl;
}

vector<vector<int>> bfs(struct Node *root)
{
    vector<vector<int>> ans;
    if (root == NULL)
        return ans;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int size = q.size();
        vector<int> level;

        for (int i = 0; i < size; i++)
        {
            struct Node *curr = q.front();
            q.pop();

            level.push_back(curr->data);
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
        ans.push_back(level);
    }
    return ans;
}

void change(Node *root)
{
    if (root == NULL)
        return;
    int childTot = 0;
    if (root->left) childTot += root->left->data;
    if (root->right) childTot += root->right->data;

    if (childTot >= root->data)
        root->data = childTot;
    else
    {
        if (root->left)
            root->left->data = root->data;
        else if (root->right)
            root->right->data = root->data;
    }

    change(root->left);
    change(root->right);

    int  tot =0;
    if(root->left) tot += root->left->data;
    if(root->right) tot += root->right->data;

    if(root->left || root->right) root->data = tot;
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

    cout << "childTot SUM PROPERTY : " << endl;
    cout << "before : " << endl;
    printarray(bfs(root));
    cout << "after : " << endl;
    change(root);
    printarray(bfs(root));

    return 0;
}