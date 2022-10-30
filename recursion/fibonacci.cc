#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{   
    if(n==0 || n==1)
        return n;
        
    return fib(n-1)+fib(n-2); 
    

    
}
int main()
{
    int n;
    cout <<"enter n : ";
    cin>>n;

    cout<<"fibonacci series upto n : "<<fib(n);
    

    return 0;

}