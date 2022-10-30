#include <iostream>
using namespace std;

struct Node
{
    struct Node *pre;
    int data;
    struct Node *next;
} * head;

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

int main()
{
    int arr[] = {2, 3, 4, 5, 6};

    create(arr, 5);

    display(head);

    return 0;
}