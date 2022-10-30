#include <bits/stdc++.h>
using namespace std;

class Queue
{
private:
    int size;
    int front;
    int rear;
    int *Q;

public:
    Queue()
    {
        front = rear = -1;
        size = 10;
        Q = new int(size);
    }

    Queue(int size)
    {
        front = rear = -1;
        this->size = size;
        Q = new int(this->size);
    }

    void enqueue(int val);
    int dequeue();
    void display();
};

void Queue ::enqueue(int val)
{
    if (front == 0 && rear == size - 1 || (rear == (front - 1) % (size - 1)))
        cout << "queue is full" << endl;

    else if (front == -1)
    {
        front = rear = 0;
        Q[rear] = val;
    }

    else if (rear == size - 1 && front != 0)
    {
        rear = 0;
        Q[rear] = val;
    }

    else
    {
        rear++;
        Q[rear] = val;
    }
}

int Queue ::dequeue()
{
    int x = -1;
    if (front == -1)
    {
        cout << "queue is empty ";
        return x;
    }

    x = Q[front];

    if (front == rear)
        front = rear = -1;

    else if (front == size - 1)
        front = 0;

    else
        front++;

    return x;
}

void Queue ::display()
{
    if (front == -1)
    {
        cout << "queue is empty ";
        return;
    }

    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
            cout << Q[i] << " ";
    }

    else
    {
        for (int i = front; i < size; i++)
            cout << Q[i] << " ";

        for (int i = 0; i <= rear; i++)
            cout << Q[i] << " ";
    }

    cout << endl;
}

int main()
{
    Queue q(5);

    q.enqueue(2);
    q.enqueue(1);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(0);

    q.display();

    q.enqueue(8);

    cout << "delete : " << q.dequeue() << endl;

    q.enqueue(88);
    q.display();

    cout << "delete : " << q.dequeue() << endl;
    cout << "delete : " << q.dequeue() << endl;
    cout << "delete : " << q.dequeue() << endl;
    cout << "delete : " << q.dequeue() << endl;
    cout << "delete : " << q.dequeue() << endl;
    cout << "delete : " << q.dequeue() << endl;

    return 0;
}