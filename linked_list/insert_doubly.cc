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

void display(struct Node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->pre;
    }
    cout << endl;
}

void insert(int val, int pos)
{
    struct Node *p = first;

    if (pos == 0)
    {
        if (p == NULL)
        {
            p->pre = NULL;
            p->data = val;
            p->next = NULL;
            first = p;
        }
        else
        {
            struct Node *t = new Node;

            t->pre = NULL;
            t->data = val;
            t->next = p;
            p->pre = t;
            first = t;
        }
    }
    else if (pos > 0)
    {
        for (int i = 0; i < pos - 1; i++)
        {
            p = p->next;
        }

        if (p)
        {
            struct Node *t = new Node;
            t->data = val;
            p->next->pre = t;
            t->next = p->next;
            t->pre = p;
            p->next = t;
    
        }
    }
}

int main()
{
    int a[] = {2, 4, 5, 6, 7};

    create(a, 5);

    insert(9, 2);

    display(last);

    return 0;
}