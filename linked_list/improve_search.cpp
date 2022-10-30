#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} * first;

void create(int arr[], int s)
{
    struct Node *t, *last;
    first = new Node;
    first->data=arr[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<s;i++)
    {
        t=new Node;
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void search(Node *p,int x)
{
    while(p)
    {
        if(p->data==x)
        {
            cout<<"value found at : "<<p;
        }

        p=p->next;
    }
}
int main()
{
    int arr[]={3,4,5,7,2,1};

    create(arr,6);

    // display(first);

    // max(first);

    search(first,0);

    return 0;
}