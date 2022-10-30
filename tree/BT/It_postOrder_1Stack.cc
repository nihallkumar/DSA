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

void printarray(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}

vector<int> postorder(struct Node *root)
{
    vector<int> postorder;
    if (root == NULL)
        return postorder;

    stack<Node *> s1;
    Node *curr = root;
    Node *temp;

    while (curr != NULL || !s1.empty())
    {
        if (curr != NULL)
        {
            s1.push(curr);
            curr = curr->left;
        }
        else
        {
            temp = s1.top()->right;

            if (temp == NULL)
            {
                temp = s1.top();
                s1.pop();
                postorder.push_back(temp->data);
                while (!s1.empty() && temp == s1.top()->right)
                {
                    temp = s1.top();
                    s1.pop();
                    postorder.push_back(temp->data);
                }
            }
            else
                curr = temp;
        }
    }
    return postorder;
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

    cout << "postorder : ";
    printarray(postorder(root));
    cout << endl;

    return 0;
}