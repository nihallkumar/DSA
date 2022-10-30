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
        p = p->next;
    }
    cout << endl;
}

void del(int pos)
{
    struct Node *p = first, *q=NULL;

    if (pos == 1)
    {
        first = first->next;
        delete p;
        if(first) first->pre = NULL;
    }
    else if (pos > 1)
    {
        for (int i = 0; i < pos - 1; i++)
        {
            q = p;
            p = p->next;
        }

        q->next = p->next;
        if(p->next)
            p->next->pre=q;
        delete p;
    }
}

int main()
{
    int a[] = {2, 4, 5, 6, 7};

    create(a, 5);

    del(5);

    display(first);

    return 0;
}