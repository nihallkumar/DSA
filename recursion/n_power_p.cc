#include<bits/stdc++.h>
using namespace std;
int power(int n, int p)
{
    if(n==0 || p==0)
        return 1;
    
    else    
    {
        // int pow=power(n,p-1);
        return n*power(n,p-1);
    }

}
int main()
{   
    int n,p;
    cout <<"enter n : ";
    cin>>n;
    cout<<"enter power : ";
    cin>>p;

    cout<<"ans : "<<power(n,p);

    
    return 0;
}