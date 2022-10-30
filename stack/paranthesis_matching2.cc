#include <bits/stdc++.h>
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
char stacktop()
{
    return top ? top->data : -1;
}

int isbalanced(char *exp)
{
    for (int i = 0; exp[i] != '\0'; i++)
    {
        char x;
        if (exp[i] == '{' || exp[i] == '[' || exp[i] == '(')
        {
            push(exp[i]);
            continue;
        }

        else
        {
            if (exp[i] == '}')
            {
                if (stacktop() == '{')
                    pop();
                else
                    return false;
            }
            else if (exp[i] == ']')
            {
                if (stacktop() == '[')
                    pop();
                else
                    return false;
            }
            else if (exp[i] == ')')
            {
                if (stacktop() == '(')
                    pop();
                else
                    return false;
            }
        }
    }

    return isempty();
}

int main()
{
    char exp[] = "){";

    cout << isbalanced(exp);



    return 0;
}