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

void insert(int x, int pos)
{
    struct Node *p = head;
    if (pos == 0)
    {
        struct Node *t;
        t = new Node;
        t->data = x;

        if (head == NULL)
        {
            t->next = head;
            head = t;
        }
        else
        {
            while (p->next != head)
            {
                p = p->next;
            }

            p->next = t;
            t->next = head;
            head = t;
        }
    }
    else
    {
        struct Node *t;
        t = new Node;
        t->data = x;

        for (int i = 0; i < pos - 1; i++)
        {
            p = p->next;
        }

        t->next = p->next;
        p->next = t;
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
    int arr[] = {2, 4, 3, 6, 1};

    create(arr, 5);

    display(head);

    insert(9, 5);

    display(head);

    return 0;
}
