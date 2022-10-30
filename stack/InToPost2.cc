#include <bits/stdc++.h>
using namespace std;

struct Node
{
    char data;
    struct Node *next;
} *top = NULL;

int isOperand(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/' || x == '^' || x == '(' || x == ')')
        return 0;

    return 1;
}

int OutPrecedence(char x)
{
    if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 3;
    else if (x == '^')
        return 6;
    else if (x == '(')
        return 7;
    else if (x == ')')
        return 0;

    return -1;
}

int InPrecedence(char x)
{
    if (x == '+' || x == '-')
        return 2;
    else if (x == '*' || x == '/')
        return 4;
    else if (x == '^')
        return 5;
    else if (x == '(')
        return 0;

    return -1;
}

char *InToPost(char *infix)
{
    int len = strlen(infix);
    char *postfix = new char(len + 2);

    stack<char> st;

    int i = 0, j = 0;

    while (infix[i] != '\0')
    {
        if (isOperand(infix[i]))
            postfix[j++] = infix[i++];
        else
        {
            if (st.empty() || OutPrecedence(infix[i]) > InPrecedence(st.top()))
                st.push(infix[i++]);
            else if (OutPrecedence(infix[i]) == InPrecedence(st.top()))
                st.pop();
            else
            {
                postfix[j++] = st.top();
                st.pop();
            }
        }
    }

    while (!st.empty() && st.top() != ')')
    {
        postfix[j++] = st.top();
        st.pop();
    }

    postfix[j] = '\0';

    return postfix;
}

int main()
{
    char infix[] = "((a+b)*c)-d^e^f";

    cout << InToPost(infix);

    return 0;
}