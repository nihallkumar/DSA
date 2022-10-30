#include<iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"enter size : ";
    cin>>n;
    int arr[n]; 
    cout<<"enter array : ";
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int mx=arr[0];

    for(int i=0;i<n;i++)
    {
        
        if(arr[i]>mx)
            mx=arr[i];        
        
        cout<<mx<<" ";

    }


    cout<<"max : "<<mx;
    

    return 0;
}
