#include <iostream>
using namespace std;

class Queue
{
private:
    int size;
    int front;
    int rear;
    char *Q;

public:
    Queue()
    {
        front = rear = -1;
        size = 5;
        Q = new char(size);
    }

    void enqueue(int val);
    char dequeue();
    void display();
};

void Queue ::enqueue(int val)
{
    if (rear == size - 1)
        cout << "queue is full" << endl;
    else
    {
        rear++;
        Q[rear] = val;
    }
}

char Queue ::dequeue()
{
    char x = '!';
    if (front == rear)
        cout << "queue is empty : ";

    else
    {
        x = Q[front + 1];
        front++;
    }
    return x;
}

void Queue ::display()
{
    if (front == rear)
        cout << "queue is empty";
    else
    {
        for (int i = front + 1; i <= rear; i++)
            cout << Q[i] << " ";
    }
}

int pre(char x)
{
    if (x >= 'a' && x <= 'z')
        return 1;
    else if (x >= 'A' && x <= 'Z')
        return 2;

    return 3;
}

int main()
{
    Queue q1;
    Queue q2;
    Queue q3;

    char x;

    for (int i = 0; i < 5; i++)
    {
        cout << "enter element : ";
        cin >> x;

        if(pre(x)==1)
        {
            q1.enqueue(x);
            continue;
        }

        if(pre(x)==2)
        {
            q2.enqueue(x);
            continue;
        }

        if(pre(x)==3)
        {
            q3.enqueue(x);
            continue;
        }
    }

    q1.display();
    q2.display();
    q3.display();

    cout<<endl;

    return 0;
}