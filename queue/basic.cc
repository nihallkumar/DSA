#include <iostream>
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

    void enqueue(int x);
    int dequeue();
    void dispaly();
    int isfull();
    int isempty();
};

void Queue::enqueue(int x)
{
    if (rear == size - 1)
        cout << "queue is full" << endl;
    else
    {
        rear++;
        Q[rear] = x;
    }
}

int Queue::dequeue()
{
    int x = -1;
    if (front == rear)
        cout << "queue is empty" << endl;
    else
    {
        x = Q[front + 1];
        front++;
    }
    return x;
}

void Queue ::dispaly()
{
    if (front == rear)
        cout << "queue is empty" << endl;
    else
    {
        for (int i = front + 1; i <= rear; i++)
        {
            cout << Q[i] << " ";
        }
        cout << endl;
    }
}

int Queue::isfull()
{
    if (rear == size - 1)
        return 1;

    return 0;
}

int Queue::isempty()
{
    if (front == rear)
        return 1;

    return 0;
}

int main()
{
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.dispaly();

    q.dequeue();

    q.dispaly();

    cout << "isEmpty : " << q.isempty() << endl;
    cout << "isFull : " << q.isfull() << endl;

    return 0;
}