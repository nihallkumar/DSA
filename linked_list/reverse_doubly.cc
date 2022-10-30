#include <iostream>
using namespace std;

struct Node
{
    struct Node *pre;
    int data;
    struct Node *next;
} *first = NULL, *last = NULL;

void create(int a[], int s)
{
    struct Node *t;

    first = new Node;
    first->pre = NULL;
    first->data = a[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < s; i++)
    {
        t = new Node;
        t->pre = last;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void rev(struct Node *p)
{
    struct Node *temp;
    while (p != NULL)
    {
        temp = p->next;
        p->next = p->pre;
        p->pre = temp;

        p = p->pre;

        if (p != NULL && p->next == NULL)
            first = p;
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
    int a[] = {2, 4, 5, 6, 7};

    create(a, 5);

    display(first);

    rev(first);

    display(first);

    return 0;
}