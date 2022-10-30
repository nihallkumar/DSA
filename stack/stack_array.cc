#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *S;
};

void create(struct Stack *st)
{
    cout << "enter size : ";
    cin >> st->size ;
    st->top = -1;
    st->S = new int(st->size);
}

void push(struct Stack *st, int x)
{
    if (st->top == st->size - 1)
        cout << "stack overflow" << endl;

    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}

int pop(struct Stack *st)
{
    int x = -1;
    if (st->top == -1)
        cout << "stack underflow" << endl;

    else
        x = st->S[st->top--];

    return x;
}

void display(struct Stack st)
{
    for (int i = st.top; i >= 0; i--)
    {
        cout << st.S[i] << " ";
    }
    cout << endl;
}

int peek(struct Stack st, int pos)
{
    int x = -1;
    if (st.top - pos + 1 < 0)
        cout << "invalid position" << endl;

    else
        x = st.S[st.top - pos + 1];

    return x;
}

bool isfull(struct Stack st)
{
    if (st.top == st.size - 1)
        return true;

    else
        return false;
}

bool isempty(struct Stack st)
{
    if (st.top == -1)
        return true;

    else
        return false;
}

int stackTop(struct Stack st)
{
    if (!isempty(st))
        return st.S[st.top];

    else
        return -1;
}

int main()
{
    struct Stack st;
    create(&st);

    push(&st, 100);
    push(&st, 321);
    push(&st, 100);
    push(&st, 321);

    display(st);

    pop(&st);
    pop(&st);

    cout << "peek : " << peek(st, 2) << endl;

    cout << "isfull : " << isfull(st) << endl;

    cout << "isempty : " << isempty(st) << endl;

    cout << "stack top : " << stackTop(st) << endl;

    return 0;
}