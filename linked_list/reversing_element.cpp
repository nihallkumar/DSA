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

void reversE(struct Node *p, int s)
{
    int arr[5];
    int i = 0;
    while (p && i < s)
    {
        arr[i] = p->data;
        i++;
        p = p->next;
    }

    p = first;
    i = s - 1;

    while (p)
    {
        p->data = arr[i];
        i--;
        p = p->next;
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
    int arr[] = {1, 2, 3, 4, 5};

    create(arr, 5);

    display(first);

    reversE(first, 5);

    display(first);

    return 0;
}