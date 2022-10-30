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
    cin >> st->size;
    st->top = -1;
    st->S = new int(st->size);
}

void push(struct Stack *st, int val)
{
    if (st->top == st->size - 1)
        cout << "stack is full" << endl;

    else
    {
        st->top++;
        st->S[st->top] = val;
    }
}

int pop(struct Stack *st)
{
    int x = -1;
    if (st->top == -1)
        cout << "stack is empty" << endl;

    else
        x = st->S[st->top--];

    return x;
}

void display(Stack st)
{
    for (int i = st.top; i >= 0; i--)
    {
        cout << st.S[i] << " ";
    }
    cout << endl;
}

int peek(Stack st, int pos)
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

    return false;
}

bool isempty(Stack st)
{
    if (st.top == -1)
        return true;

    return false;
}

int top(Stack st)
{
    if (!isempty(st))
        return st.S[st.top];

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

    cout << "stack top : " << top(st) << endl;

    return 0;

    return 0;
}