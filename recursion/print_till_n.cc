#include<bits/stdc++.h>
using namespace std;
void dec(int n)
{   
    if(n==0)
    {
        // cout <<n<<" ";
        // return print (n-1);
        return ;
    }

    cout <<n<<" ";
        return dec(n-1);
    
    // return 0;
}
void inc(int n)
{
    if(n==0)
        return;

    inc(n-1);
    cout<<n<<" ";
}
int main()
{
    int n;
    cout << "enter n : ";
    cin>>n;
    dec(n);
    cout<<endl;
    inc(n);
    return 0;
}