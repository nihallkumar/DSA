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

void middle(struct Node *p)
{
    struct Node *q = first;
    while (p)
    {
        p = p->next;
        if (p)
            p = p->next;
        if (p)
            q = q->next;
    }

    cout << q->data << endl;
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
    int arr[] = {1, 2, 3, 4, 5};

    create(arr, 5);

    display(first);

    middle(first);

    return 0;
}