#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    n=5;

    for(i=1;i<=n;i++)
    {
        for(j=5;j>=1;j--)
        {
            if(j>i)
                cout<<" ";
            
            else   
                cout<<j;
        }
        
        for(j=1;j<i;j++)
        {
            int k=j+1;
            cout<<k++;
        }

        cout<<endl;
    }

    return 0;
}