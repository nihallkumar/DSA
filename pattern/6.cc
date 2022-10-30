#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter n : ";
    cin>>n;
    int i,j,l=1;

    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
            cout<<l++<<" ";

        cout<<endl;
    }

    return 0;
}