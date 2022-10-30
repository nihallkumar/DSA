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
    while (p)
    {
        cout << p->data << " ";
        p=p->next;
    }
    cout<<endl;
}

struct Node *partition(struct Node *head, int x)
{
    struct Node *str1, *str2, *str3, *p, *p1, *p2, *p3;
    str1 = str2 = str3 = NULL;
    p = head;

    while (p)
    {
        if (p->data < x)
        {
            if (str1 == NULL)
            {
                str1 = p;
                p1 = str1;
            }
            else
                p1->next = p;

            p1 = p;
            p = p->next;
            p1->next = NULL;
        }

        else if (p->data == x)
        {
            if (str2 == NULL)
            {
                str2 = p;
                p2 = p;
            }
            else
                p2->next = p;

            p2 = p;
            p = p->next;
            p2->next = NULL;
        }

        else if (p->data > x)
        {
            if (str3 == NULL)
            {
                str3 = p;
                p3 = p;
            }
            else
                p3->next = p;

            p3 = p;
            p = p->next;
            p3->next = NULL;
        }
    }

    if (str1 != NULL)
    {
        head = str1;
        if (str2 != NULL)
        {
            p1->next = str2;
            p2->next = str3;
        }
        else
            p1->next = str3;
    }
    else
    {
        if (str2 != NULL)
        {
            head = str2;
            p2->next = str3;
        }
        else
            head = str3;
    }

    return head;
}

int main()
{
    int a[] = {2, 5, 3, 1, 4};

    Create(a, 5);

    Display(first);

    first = partition(first, 3);

    Display(first);

    return 0;
}