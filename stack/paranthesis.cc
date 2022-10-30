#include <bits/stdc++.h>
using namespace std;

struct Stack
{
    int size;
    int top;
    char *S;
};

void push(struct Stack *st, char x)
{
    if (st->top == st->size - 1)
        cout << "stack is full";
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}

char pop(struct Stack *st)
{
    char x = -1;
    if (st->top == st->size - 1)
        cout << "stack is empty" << endl;
    else
    {
        x = st->S[st->top--];
    }
    return x;
}

int isempty(struct Stack st)
{
    return st.top == -1 ? 1 : 0;
}

int isbalanced(char *exp)
{
    struct Stack st;
    st.size = strlen(exp);
    st.top = -1;
    st.S = new char(st.size);

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
            push(&st,exp[i]);
        else if (exp[i] == ')')
        {
            if (isempty(st))
                return false;
            else
                pop(&st);
        }
    }

    return isempty(st);
}

int main()
{
    char exp[] = "((a+b)*(c-d))";

    cout << isbalanced(exp);

    return 0;
}