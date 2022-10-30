#include<bits/stdc++.h>
using namespace std;
int pairing(int n)
{
    if(n==0 || n==1 || n==2)
        return n;

    return pairing(n-1) + pairing(n-2)*(n-1);
}
int main()
{
    int n;
    cout<<"enter no of people : ";
    cin>>n;

    cout<<"total no to pair "<<n<<" people : "<<pairing(n);


    return 0;
}