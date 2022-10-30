#include<bits/stdc++.h>
using namespace std;
int sort(int arr[],int n)
{
    if(n==1)
        return 1;
    
    if(arr[0]<arr[1] && sort(arr+1,n-1) )
        return 1;

    return 0;
}
int main()
{
    int n;
    cout <<"enter size : ";
    cin>>n;

    int arr[n];
    cout <<"enter array : ";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    
    sort(arr,n)!=1?cout<<"array is not sorted":cout <<"array is sorted ";

    return 0;
}