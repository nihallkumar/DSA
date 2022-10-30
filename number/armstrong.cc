#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;

    int temp=n;
    int rem;
    int rev=0;
    while(temp!=0)
    {
        rem=temp%10;
        rev=(rem*rem*rem)+rev;
        temp=temp/10;
    }

    rev==n?cout<<"armstrong":cout<<"not armstrong";


    return 0;
}