#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *front = NULL, *rear = NULL;

void enqueue(int val)
{
    struct Node *t = new Node;
    if (t == NULL)
        cout << "queue is empty" << endl;

    else
    {
        t->data = val;
        t->next = NULL;

        if (front == NULL)
            front = rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x = -1;

    if (front == NULL)
    {
        cout << "queue is empty : ";
        return x;
    }
    else
    {
        struct Node *t = front;
        front = front->next;
        x = t->data;
        delete t;
    }
    return x;
}

void display()
{
    struct Node *p = front;
    if (p == NULL)
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        while (p)
        {
            cout << p->data << " ";
            p = p->next;
        }
        cout << endl;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();

    cout << "delete : " << dequeue() << endl;
    cout << "delete : " << dequeue() << endl;
    cout << "delete : " << dequeue() << endl;
    cout << "delete : " << dequeue() << endl;
    cout << "delete : " << dequeue() << endl;
    cout << "delete : " << dequeue() << endl;

    display();

    return 0;
}