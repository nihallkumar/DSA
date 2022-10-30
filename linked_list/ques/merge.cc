#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL, *second = NULL, *third, *last;

void create1(int arr[], int s)
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

void create2(int arr[], int s)
{
    struct Node *t, *last;
    second = new Node;
    second->data = arr[0];
    second->next = NULL;
    last = second;

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

void merge(Node *f, Node *s)
{
    if (f->data < s->data)
    {
        third = f;
        f = f->next;
        last = third;
        // last->next = NULL;
    }
    else
    {
        third = s;
        s = s->next;
        last = third;
        // last->next = NULL;
    }

    while (f && s)
    {
        if (f->data < s->data)
        {
            last->next = f;
            last = f;
            f = f->next;
        }
        else 
        {
            last->next = s;
            last = s;
            s = s->next;
        }
    }

    if (f)
    {
        last->next = f;
    }
    else if (s)
    {
        last->next = s;
    }
}

int main()
{
    int arr1[] = {1, 2, 4, 5, 7};
    int arr2[] = {0, 1, 3, 8, 9};

    create1(arr1, 5);
    create2(arr2, 4);

    cout << "first list" << endl;
    display(first);

    cout << "second list" << endl;
    display(second);

    merge(first, second);
    cout << "after concatination : ";
    display(third);

    return 0;
}