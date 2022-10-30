#include<iostream>
using namespace std;

bool isOdd(int n)
{
    return (n & 1) == 1;
}

int main()
{
    int n;
    cout<<"enter a no : ";
    cin>>n;

    cout<<"is it odd :: "<<isOdd(n);

    return 0;
}