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

bool help(Node *left, Node* right)
{
    if(left==NULL || right==NULL)
        return left==right;

    if(left->data != right->data)
        return false;
    
    return help(left->left,right->right) && help(left->right,right->right);
}

bool isSymmetric(Node* root)
{
    return root==NULL || help(root->left ,root->right); 
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

    cout << "IS SYMMTRIC : ";
    cout<<isSymmetric(root);
    
    return 0;
}