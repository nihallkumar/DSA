#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter n : ";
    cin>>n;
    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j<=i)
                cout<<i;
        }
        cout<<endl;
    }

    return 0;
}