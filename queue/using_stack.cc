#include <iostream>
#include <stack>
using namespace std;

class Queue
{
private:
    stack<int> e_st;
    stack<int> d_st;

public:
    Queue(){};
    ~Queue(){};

    void enqueue(int x);
    int dequeue();
};

void Queue ::enqueue(int x)
{
    e_st.push(x);
}

int Queue ::dequeue()
{
    int x = -1;

    if (d_st.empty())
    {
        if (e_st.empty())
        {
            cout << "stack is empty";
            return x;
        }
        else
        {
            while (!e_st.empty())
            {
                d_st.push(e_st.top());
                e_st.pop();
            }
        }
    }
    x = d_st.top();
    d_st.pop();
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

    return 0;
}