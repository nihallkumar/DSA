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

void display(struct Node *p)
{
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
    cout << endl;
}

void displayR(struct Node *h)
{
    static int flag = 0;
    if (h != head || flag == 0)
    {
        flag = 1;
        cout << h->data << " ";
        displayR(h->next);
    }
}

int main()
{
    int arr[] = {2, 4, 3, 6, 1};

    create(arr, 5);

    display(head);

    displayR(head);

    return 0;
}
