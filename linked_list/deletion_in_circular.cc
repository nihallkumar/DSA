#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} * head;

void create(int arr[], int s)
{
    struct Node *t, *last;

    head = new Node;
    head->data = arr[0];
    head->next = head;
    last = head;

    for (int i = 1; i < s; i++)
    {
        t = new Node;

        t->data = arr[i];
        t->next = head;
        last->next = t;
        last = t;
    }
}

void del(int pos)
{
    struct Node *p = head;

    if (pos == 1)
    {   
        while (p->next != head)
        {
            p = p->next;
        }

        if (p == head)
        {
            delete head;
            head = NULL;
        }
        else
        {
            p->next = head->next;
            delete head;
            head = p->next;
        }
    }
    else
    {
        struct Node *q;
        for (int i = 0; i < pos - 1; i++)
        {
            q = p;
            p = p->next;
        }

        q->next = p->next;
        delete p;
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

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    create(arr, 5);

    display(head);

    del(1);

    display(head);

    return 0;
}
