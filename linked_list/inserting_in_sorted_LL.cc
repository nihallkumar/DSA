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

void display(struct Node *p)
{
    while (p)
    {
        cout << p->data << " ";

        p = p->next;
    }
    cout << endl;
}

void insert(int x)
{
    Node *p, *q;

    p = first;
    q = NULL;

    while (p && x > p->data)
    {
        q = p;
        p = p->next;
    }
    Node *t = new Node;
    t->data = x;
    t->next = p;
    q->next = t;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 7, 9};

    create(arr, 7);

    display(first);

    insert(8);

    display(first);

    return 0;
}