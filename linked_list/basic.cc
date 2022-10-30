#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} * first;


void Create(int a[], int n)
{
    struct Node *t, *last;
    first = new Node;
    first->data = a[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *p)
{
    if (p)
    {
        cout << p->data << " ";
        Display(p->next);
    }
}

void Count(struct Node *p)
{
    int count = 0;

    while (p)
    {
        count += 1;
        p = p->next;
    }
    cout << endl
         << "total no of count : " << count << endl;
}

void Sum(struct Node *p)
{
    int sum = 0;

    while (p)
    {
        sum += p->data;
        p = p->next;
    }
    cout << "total sum : " << sum << endl;
}

int main()
{
    int a[] = {2, 1, 2, 1, 4};

    Create(a, 5);

    Display(first);

    Count(first);

    Sum(first);

    return 0;
}