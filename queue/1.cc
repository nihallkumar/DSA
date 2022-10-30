#include <bits/stdc++.h>
using namespace std;

class Queue
{
    stack<int> s1, s2;

public:
    void enqueue(int val);
    int dequeue();
};

void Queue::enqueue(int val)
{
    s1.push(val);
}

int Queue::dequeue()
{
    int x = -1;

    if (s2.empty())
    {
        if (s1.empty())
        {
            cout << "queue is emmpty ";
            return x;
        }
        else
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
    }

    x = s2.top();
    s2.pop();

    return x;
}

int main()
{
    int arr[] = {2, 4, 1, 5, 3};

    Queue q;

    cout << "enqueue : " << flush;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        q.enqueue(arr[i]);
        cout << arr[i] << flush;
        if (i < sizeof(arr) / sizeof(arr[0] - 1))
            cout << " <- " << flush;
    }

    cout << endl;

    cout << "dequeue : " << flush;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << q.dequeue() << flush;
        if (i < (sizeof(arr) / sizeof(arr[0])))
            cout << " <- " << flush;
    }
}