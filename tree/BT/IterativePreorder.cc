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

vector<int> preorder(struct Node *root)
{
    vector<int> preorder;
    if (root == NULL)
        return preorder;

    stack<Node *> st;
    st.push(root);

    while (!st.empty())
    {
        Node* curr = st.top();
        st.pop();

        preorder.push_back(curr->data);
        if (curr->right)
            st.push(curr->right);
        if (curr->left)
            st.push(curr->left);
    }
    return preorder;
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

    cout << "preorder : ";
    printarray(preorder(root));
    cout << endl;

    return 0;
}