#include <iostream>
using namespace std;

struct Node
{
    char data;
    struct Node *next;
} *top = NULL;

void push(char x)
{
    struct Node *t = new Node;
    if (t == NULL)
        cout << "stack is full" << endl;
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

char pop()
{
    struct Node *p;
    char x = -1;

    if (top == NULL)
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        p = top;
        top = top->next;
        x = p->data;
        delete p;
    }
    return x;
}

int isempty()
{
    if (top == NULL)
        return true;
    else
        return false;
}

int isbalanced(char *exp)
{
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(exp[i]);
        }
        else if (exp[i] == ')')
        {
            if (isempty())
                return false;
            else
                pop();
        }
    }

    if (top == NULL)
        return true;
    else
        return false;
}

int main()
{
    char exp[] = "(((a+b)*(c-d)))";

    cout << isbalanced(exp);

    return 0;
}