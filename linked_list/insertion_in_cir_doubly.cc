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

void insert(int val, int pos)
{
    struct Node *p = head;
    struct Node *t = new Node;
    if (pos == 0)
    {
        if (p == NULL)
        {
            t->pre = t;
            t->data = val;
            t->next = t;

            head = t;
        }
        else if (p)
        {
            t->pre = head->pre;
            t->data = val;
            t->next = head;
            head->pre->next = t;
            head->pre = t;
            head = t;
        }
    }
    else if (p > 0)
    {
        for (int i = 0; i < pos - 1; i++)
        {
            p = p->next;
        }

        t->data = val;
        t->next = p->next;
        t->pre = p;
        p->next->pre = t;
        p->next = t;
    }
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6};

    create(arr, 5);

    display(head);

    insert(9, 0);

    display(head);

    return 0;
}