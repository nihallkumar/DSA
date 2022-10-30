#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    n=5;

    for(i=0;i<n;i++)
    {
        for(j=i;j<n-1;j++)
            cout<<" ";

        for(j=0;j<n;j++)
            cout<<"*";

        cout<<endl;
    }

    return 0;
}