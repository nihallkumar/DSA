#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cout<<"enter n : ";

    cin.ignore();
    char arr[n+1];

    cout<<"enter a sentance : ";
    
    cin.getline(arr,n);
    cin.ignore();

    int i=0;
    int currlen=0,maxlen=0;
    int st=0,maxst=0;

    while(i=0)
    {   
        if(arr[i]==' ' || arr[i]=='\0')
        {
            if(currlen > maxlen)
            {
                maxlen=currlen;
                maxst=st;
            }

            st=i+1;
            currlen=0;
        }

        else
        {
            currlen++;
            if(arr[i]!='\0')
            break;

            i++;

        }

    }

    cout<<"max length : "<<maxlen<<endl;
    for(int i=0;i<maxst;i++)
    {
        cout<<arr[i+maxst];
    }

    return 0;
}