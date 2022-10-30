#include <iostream>
using namespace std;

struct Node
{
    struct Node *pre;
    int data;
    struct Node *next;
} *head = NULL;

void create(int arr[], int s)
{
    struct Node *t, *last;

    head = new Node;
    head->pre = head;
    head->data = arr[0];
    head->next = head;
    last = head;

    for (int i = 1; i < s; i++)
    {
        t = new Node;
        t->data = arr[i];
        t->pre = last;
        t->next = head;
        last->next = t;
        last = t;
        head->pre = last;
    }
}

void display(struct Node *p)
{
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
    cout << endl;
}

void del(int pos)
{
    struct Node *p = head;

    if (pos == 1)
    {
        head = p->next;
        head->pre = p->pre;
        p->pre->next = head;

        delete p;
    }
    else if (pos > 1)
    {
        struct Node *q;
        for (int i = 0; i < pos - 1; i++)
        {
            q = p;
            p = p->next;
        }

        q->next = p->next;
        p->next->pre = p->pre;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    create(arr, 5);

    display(head);

    del(5);

    display(head);

    return 0;
}