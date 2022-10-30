#include<bits/stdc++.h>
using namespace std;
int countmazepath(int n, int i, int j)
{
    if(i==n-1 && j==n-1)
        return 1;
    
    if(i>=n || j>=n)
        return 0;
    
    return countmazepath(n,i+1,j) + countmazepath(n,i,j+1);
}
int main()
{   
    int n;
    cout<<"enter size of maze : ";
    cin>>n;

    cout<<"no of path possible in maze : "<<countmazepath(n,0,0);


    return 0;
}