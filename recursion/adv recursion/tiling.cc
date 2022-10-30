#include<bits/stdc++.h>
using namespace std;
int tilingways(int n)
{
    if(n==0 || n==1)
        return n;

    return tilingways(n-1) + tilingways(n-2);
}
int main()
{
    int n;
    cout<<"enter the size of tile board : ";
    cin>>n;

    cout<<"no of tiling ways : "<<tilingways(n);



    return 0;
}