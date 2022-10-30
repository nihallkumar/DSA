#include<bits/stdc++.h>
using namespace std;
int fst(int arr[],int n,int i,int val)
{
    if(n==0)
        return -1;
    
    if(val==arr[i])
        return i;


    return fst(arr,n,i+1,val);
}

int lst(int arr[],int n,int i,int val)
{

    // if(i<0)
    //     return -1;

    // else if(val==arr[i])
    //     return i;
    
    
    // return lst(arr,n,i-1,val);

    if(i==n)
        return -1;

    int rest =lst(arr,n,i+1,val);
    if(rest!=-1)
        return rest;
    
    else if(arr[i]==val)
        return i;

    return -1;

}
int main()
{
    int n;
    cout <<"enter size : ";
    cin>>n;
    int arr[n-1];
    cout <<"enter array : ";
    for (int i=0;i<n;i++)
        cin>>arr[i];

    int val;
    cout <<"enter element to search : ";
    cin>>val;

    cout<<"first position : "<<fst(arr,n,0,val)<<endl;

    cout<<"last position : "<<lst(arr,n,0,val);


    return 0;
}