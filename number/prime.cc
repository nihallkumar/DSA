#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;

    int i;
    int count=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            count++;
    }

    count!=0?cout<<"not prime":cout<<"prime";

    return 0;
}