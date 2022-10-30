#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter size : ";
    cin>>n;
    
    char arr[n+1];

    cout<<"enter name : ";

    cin>>arr;

    bool check=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            check=0;
            break;
        }

    }
    
    if(check == true )
        cout<<"word is a palindrome";

    else 
        cout<<"not palindrome";
    return 0;
}