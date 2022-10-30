#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *top = NULL;

void push(int x)
{
    struct Node *t;
    t = new Node;

    if (t == NULL)
        cout << "stack is full" << endl;
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop()
{
    if (top == NULL)
    {
        cout << "stack is empty" << endl;
        return -1;
    }
    else
    {
        struct Node *p = top;
        top = top->next;
        int x = p->data;
        delete p;
        return x;
    }
}

void display()
{
    struct Node *p = top;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int peek(int pos)
{
    struct Node *p = top;

    for (int i = 0; i < pos - 1 && p != NULL; i++)
        p = p->next;

    if (p == NULL)
        return -1;
    else
        return p->data;
}

int stacktop()
{
    if (top != NULL)
        return top->data;
    else
        return -1;
}

int isempty()
{
    return top ? 0 : 1;
}

int isfull()
{
    Node *t = new Node;
    int r = t ? 1 : 0;
    delete t;
    return r;
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);

    display();

    cout << "pop : " << pop() << endl;
    cout << "pop : " << pop() << endl;
    // cout << "pop : " << pop() << endl;
    // cout << "pop : " << pop() << endl;

    display();

    cout<<"peek : "<<peek(2)<<endl;

    cout<<"stacktop : "<<stacktop()<<endl;

    cout<<"isempty : "<<isempty()<<endl;

    cout<<"isfull : "<<isfull()<<endl;

    return 0;
}