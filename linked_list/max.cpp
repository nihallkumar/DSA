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

void display(struct Node *p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

void max(struct Node *p)
{
    int temp=INT_MIN;
    while(p->next!=NULL)
    {
        if(p->data>temp)
        {
            temp=p->data;
        }
        else
            p=p->next;
    }
    cout<<temp<<endl;
}

void search(Node *p,int x)
{
    while(p)
    {
        if(x==p->data)
        {
            cout<<"present at : "<<p;
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

    search(first,2);

    return 0;
}