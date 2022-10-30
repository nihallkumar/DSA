#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL, *second = NULL, *third;

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

void concat(Node *f,Node *s)
{
    while(f->next!=NULL)
    {
        f=f->next;
    }
    f->next=s;
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
    int arr1[] = {1, 2, 4, 5, 7};
    int arr2[] = {0, 3, 6, 8, 9};

    create1(arr1, 5);
    create2(arr2, 5);

    cout << "first list" << endl;
    display(first);

    cout << "second list" << endl;
    display(second);

    concat(first,second);
    cout<<"after concatination : ";
    display(first);

    return 0;
}