#include<iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int rev=0,remainder;

    while(n!=0)
    {
        remainder=n%10;
        rev=rev*10+remainder;
        n=n/10;
    }

    cout<<"reverse : "<<rev;
    return 0;
}