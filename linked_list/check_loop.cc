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

int isLoop(struct Node *f)
{
    struct Node *p, *q;
    p = q = f;

    do
    {
        p = p->next;
        q = q->next;
        q != NULL ? q->next : NULL;
    } while (p && q && p != q);

    if (p == q)
        return 1;
    else
        return 0;
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
    struct Node *t1, *t2;
    int arr[] = {1, 2, 3, 5, 7};
    create(arr, 5);

    t1 = first->next->next;
    t2 = first->next->next->next->next;
    t2->next = t1;

    // display(first);

    cout << isLoop(first);

    return 0;
}