#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} * first;

void create(int arr[], int s)
{
    struct Node *t, *last;
    first = new Node;
    first->data = arr[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < s; i++)
    {
        t = new Node;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void reverseS(struct Node *p)
{
    struct Node *q = NULL, *r = NULL;

    while (p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

void reverseR(Node *q, Node *p)
{
    if (p != NULL)
    {
        reverseR(p, p->next);
        p->next=q;
    }
    else{
        first=q;
    }
}

void display(struct Node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 4, 2, 5, 7};

    create(arr, 5);

    display(first);

    // reverseS(first);

    reverseR(NULL,first);

    display(first);

    return 0;
}